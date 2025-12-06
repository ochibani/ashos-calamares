# Maintainer:
# Contributor:

_pkgname="ashso-calamares"
pkgname="$_pkgname-git"
pkgver=3.4.0.r20.gc5c9b79
pkgrel=1
pkgdesc="Distribution-independent installer framework"
url="https://github.com/ochibani/ashos-calamares"
license=("GPL-3.0-or-later")
arch=('i686' 'x86_64')

depends=(
  'kcoreaddons'
  'kpmcore'
  'libpwquality'
  'qt6-declarative'
  'qt6-svg'
  'yaml-cpp'
)
makedepends=(
  'extra-cmake-modules'
  'git'
  'ninja'
  'qt6-tools'
  'qt6-translations'
)

provides=("$_pkgname")
conflicts=("$_pkgname")

_pkgsrc="$_pkgname"
source=("$_pkgsrc"::"git+$url.git")
sha256sums=('SKIP')

#pkgver() {
#  cd "$_pkgsrc"
#  git describe --long --tags --abbrev=7 --exclude='*[a-zA-Z][a-zA-Z]*' \
#    | sed -E 's/^[^0-9]*//;s/([^-]*-g)/r\1/;s/-/./g'
#}

build() {
  local _skip_modules=(
    dracut
    dracutlukscfg
    dummycpp
    dummyprocess
    dummypython
    dummypythonqt
    interactiveterminal
    services-openrc
  )

  local _cmake_options=(
    -B build
    -S "$_pkgsrc"
    -G Ninja
    -DCMAKE_BUILD_TYPE=Release
    -DCMAKE_INSTALL_PREFIX='/usr'
    -DCMAKE_INSTALL_LIBDIR='lib'
    -DWITH_QT6=ON
    -DINSTALL_CONFIG=ON
    -DSKIP_MODULES="${_skip_modules[*]}"
    -DBUILD_TESTING=OFF
    -Wno-dev
  )
  
  cd ${srcdir}
  cmake "${_cmake_options[@]}"
  cmake --build build
}

package() {
    cd ${srcdir}/build
    DESTDIR="${pkgdir}" cmake --build . --target install

    #cp ${srcdir}/${_pkgname}/settings_offline.conf "$pkgdir/usr/share/calamares/settings_offline.conf"
    #cp ${srcdir}/${_pkgname}/settings_online.conf "$pkgdir/usr/share/calamares/settings_online.conf"
    cp ${srcdir}/${_pkgname}/settings.conf "$pkgdir/usr/share/calamares/settings.conf"
    local _destdir=etc/calamares
    install -dm755 $pkgdir/$_destdir
    install -dm755 $pkgdir/$_destdir/modules
    cp -rf ${srcdir}/${_pkgname}/src/modules/*/*.conf "$pkgdir/etc/calamares/modules"
    cp -rf ${srcdir}/${_pkgname}/src/scripts "$pkgdir/etc/calamares"
    cp -rf ${srcdir}/${_pkgname}/src/images "$pkgdir/etc/calamares"
}
