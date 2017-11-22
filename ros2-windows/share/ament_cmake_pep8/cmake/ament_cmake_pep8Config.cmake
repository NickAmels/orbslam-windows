# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_ament_cmake_pep8_CONFIG_INCLUDED)
  return()
endif()
set(_ament_cmake_pep8_CONFIG_INCLUDED TRUE)

# output package information
if(NOT ament_cmake_pep8_FIND_QUIETLY)
  message(STATUS "Found ament_cmake_pep8: 0.0.3 (${ament_cmake_pep8_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'ament_cmake_pep8' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(ament_cmake_pep8_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_pep8-extras.cmake")
foreach(_extra ${_extras})
  include("${ament_cmake_pep8_DIR}/${_extra}")
endforeach()
