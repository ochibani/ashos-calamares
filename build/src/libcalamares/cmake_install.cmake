# Install script for directory: /mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/sbin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.3.15"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/build/libcalamares.so.3.3.15"
    "/mnt/c/Users/ma535/Work/ashos-calamares/build/libcalamares.so.3.3"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.3.15"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libcalamares.so.3.3"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/sbin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/mnt/c/Users/ma535/Work/ashos-calamares/build/libcalamares.so")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  
    file( MAKE_DIRECTORY "$ENV{DESTDIR}//usr/lib/calamares" )
    execute_process( COMMAND "/usr/sbin/cmake" -E create_symlink ../libcalamares.so.3.3.15 libcalamares.so WORKING_DIRECTORY "$ENV{DESTDIR}//usr/lib/calamares" )

endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/build/src/libcalamares/CalamaresConfig.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/build/src/libcalamares/CalamaresVersion.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/CalamaresAbout.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/CppJob.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/DllMacro.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/GlobalStorage.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/Job.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/JobExample.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/JobQueue.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/ProcessJob.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/Settings.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/geoip" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/geoip/GeoIPFixed.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/geoip/GeoIPJSON.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/geoip/GeoIPTests.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/geoip/GeoIPXML.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/geoip/Handler.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/geoip/Interface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/locale" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/Global.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/Lookup.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/TimeZone.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/TranslatableConfiguration.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/TranslatableString.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/Translation.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/locale/TranslationsModel.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/modulesystem" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/Actions.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/Config.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/Descriptor.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/InstanceKey.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/Module.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/Preset.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/Requirement.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/RequirementsChecker.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/modulesystem/RequirementsModel.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/network" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/network/Manager.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/network/Tests.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/partition" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/AutoMount.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/FileSystem.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/Global.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/KPMHelper.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/KPMManager.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/Mount.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/PartitionIterator.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/PartitionQuery.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/PartitionSize.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/partition/Sync.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/utils" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/CommandList.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Dirs.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Entropy.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Logger.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/NamedEnum.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/NamedSuffix.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Permissions.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/PluginFactory.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/RAII.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Retranslator.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Runner.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/String.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/StringExpander.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/System.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Traits.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/UMask.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Units.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Variant.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/Yaml.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/utils/moc-warnings.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/compat" TYPE FILE FILES
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/compat/CheckBox.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/compat/Mutex.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/compat/Size.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/compat/Variant.h"
    "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/compat/Xml.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "CALAMARES" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/libcalamares/packages" TYPE FILE FILES "/mnt/c/Users/ma535/Work/ashos-calamares/src/libcalamares/packages/Globals.h")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/mnt/c/Users/ma535/Work/ashos-calamares/build/src/libcalamares/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
