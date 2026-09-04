#   SPDX-FileCopyrightText: 2014 Teo Mrnjavac <teo@kde.org>
#   SPDX-License-Identifier: BSD-2-Clause

IF(NOT EXISTS "/mnt/c/Users/ma535/Work/ashos-calamares/build/install_manifest.txt")
  MESSAGE(FATAL_ERROR "Cannot find install manifest: \"/mnt/c/Users/ma535/Work/ashos-calamares/build/install_manifest.txt\"")
ENDIF(NOT EXISTS "/mnt/c/Users/ma535/Work/ashos-calamares/build/install_manifest.txt")

FILE(READ "/mnt/c/Users/ma535/Work/ashos-calamares/build/install_manifest.txt" files)
STRING(REGEX REPLACE "\n" ";" files "${files}")
FOREACH(file ${files})
  MESSAGE(STATUS "Uninstalling \"$ENV{DESTDIR}${file}\"")
  IF(EXISTS "$ENV{DESTDIR}${file}")
    EXEC_PROGRAM(
      "/usr/sbin/cmake" ARGS "-E remove \"$ENV{DESTDIR}${file}\""
      OUTPUT_VARIABLE rm_out
      RETURN_VALUE rm_retval
      )
    IF(NOT "${rm_retval}" STREQUAL 0)
      MESSAGE(FATAL_ERROR "Problem when removing \"$ENV{DESTDIR}${file}\"")
    ENDIF(NOT "${rm_retval}" STREQUAL 0)
  ELSE(EXISTS "$ENV{DESTDIR}${file}")
    MESSAGE(STATUS "File \"$ENV{DESTDIR}${file}\" does not exist.")
  ENDIF(EXISTS "$ENV{DESTDIR}${file}")
ENDFOREACH(file)
