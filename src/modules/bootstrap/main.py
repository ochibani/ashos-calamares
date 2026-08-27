#!/usr/bin/env python3

import os
import subprocess
import shutil
import time

import libcalamares
from libcalamares.utils import gettext_path, gettext_languages

import gettext

_translation = gettext.translation("calamares-python",
                                   localedir=gettext_path(),
                                   languages=gettext_languages(),
                                   fallback=True)
_ = _translation.gettext
_n = _translation.ngettext

custom_status_message = None
status_update_time = 0


class BootstrapError(Exception):
    """Exception raised when the bootstrap command returns a non-zero exit code"""
    def __init__(self, message):
        self.message = message


def pretty_name():
    return _("Install base system")


def pretty_status_message():
    if custom_status_message is not None:
        return custom_status_message


def line_cb(line):
    global custom_status_message
    global status_update_time
    custom_status_message = line.strip()
    libcalamares.utils.debug("bootstrap: " + line.strip())
    if (time.time() - status_update_time) > 0.5:
        libcalamares.job.setprogress(0)
        status_update_time = time.time()


def run_in_host(command, line_func):
    proc = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                            universal_newlines=True, bufsize=1)
    for line in proc.stdout:
        if line.strip():
            line_func(line)
    proc.wait()
    if proc.returncode != 0:
        raise BootstrapError("Failed to run: " + " ".join(command))


def bootstrap_arch(root_mount_point, packages):
    """Bootstrap Arch Linux using pacstrap"""
    pacstrap_command = ["/etc/calamares/scripts/bootstrap_calamares", "-c", "-D", distro, root_mount_point] + packages
    run_in_host(pacstrap_command, line_cb)


def bootstrap_debian(root_mount_point, packages):
    """Bootstrap Debian using debootstrap"""
    distro = libcalamares.globalstorage.value("DISTRO")
    codename = "bookworm"
    debootstrap_command = ["debootstrap", "--include=" + ",".join(packages),
                           codename, root_mount_point, "http://deb.debian.org/debian"]
    run_in_host(debootstrap_command, line_cb)


def bootstrap_fedora(root_mount_point, packages):
    """Bootstrap Fedora using dnf --installroot"""
    dnf_command = ["dnf", "--installroot=" + root_mount_point,
                   "-y", "install"] + packages
    run_in_host(dnf_command, line_cb)


def run():
    root_mount_point = libcalamares.globalstorage.value("rootMountPoint")

    if not root_mount_point:
        return ("No mount point for root partition in globalstorage",
                "globalstorage does not contain a \"rootMountPoint\" key, "
                "doing nothing")

    if not os.path.exists(root_mount_point):
        return ("Bad mount point for root partition in globalstorage",
                "globalstorage[\"rootMountPoint\"] is \"{}\", which does not "
                "exist, doing nothing".format(root_mount_point))

    distro = libcalamares.globalstorage.value("DISTRO")
    if not distro:
        return ("No distribution selected",
                "globalstorage does not contain a \"DISTRO\" key, "
                "doing nothing")

    if not libcalamares.job.configuration:
        return "No configuration found", "Aborting due to missing configuration"

    base_packages_config = libcalamares.job.configuration.get("basePackages", {})
    if isinstance(base_packages_config, list):
        base_packages = base_packages_config
    else:
        base_packages = base_packages_config.get(distro, [])

    if not base_packages:
        return "Package List Missing", "Cannot continue without list of packages for distro: " + distro

    # Check filesystem type and add filesystem-specific packages
    try:
        curr_filesystem = subprocess.run(
            ["findmnt", "-ln", "-o", "FSTYPE", root_mount_point],
            stdout=subprocess.PIPE
        ).stdout.decode('utf-8').strip()
    except Exception:
        curr_filesystem = ""

    libcalamares.utils.debug("Current filesystem: {!s}".format(curr_filesystem))

    if distro == "arch":
        if curr_filesystem == "zfs":
            libcalamares.utils.debug("Root on ZFS")
            base_packages += ["zfs-utils", "zfs-linux", "zfs-linux-lts"]
        elif curr_filesystem == "bcachefs":
            libcalamares.utils.debug("Root on BCACHEFS")
            base_packages += ["bcachefs-tools"]

    # Run the appropriate bootstrap
    try:
        if distro == "arch":
            bootstrap_arch(root_mount_point, base_packages)
        elif distro == "debian":
            bootstrap_debian(root_mount_point, base_packages)
        elif distro == "fedora":
            bootstrap_fedora(root_mount_point, base_packages)
        else:
            return "Unsupported distribution", "Distribution '{}' is not supported".format(distro)
    except BootstrapError as e:
        return "Failed to bootstrap", str(e)
    except subprocess.CalledProcessError as cpe:
        return "Failed to bootstrap", "Bootstrap failed with error {!s}".format(cpe)

    # Copy post-install files
    post_install_config = libcalamares.job.configuration.get("postInstallFiles", {})
    if isinstance(post_install_config, list):
        files_to_copy = post_install_config
    else:
        files_to_copy = post_install_config.get(distro, [])

    for source_file in files_to_copy:
        if os.path.exists(source_file):
            try:
                libcalamares.utils.debug("Copying file {!s}".format(source_file))
                dest = os.path.normpath(root_mount_point + source_file)
                os.makedirs(os.path.dirname(dest), exist_ok=True)
                shutil.copy2(source_file, dest)
            except Exception as e:
                libcalamares.utils.warning("Failed to copy file {!s}, error {!s}".format(source_file, e))

    libcalamares.globalstorage.insert("online", True)
    libcalamares.job.setprogress(1.0)

    return None
