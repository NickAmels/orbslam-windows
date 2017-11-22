# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_lifecycle_CONFIG_INCLUDED)
  return()
endif()
set(_lifecycle_CONFIG_INCLUDED TRUE)

# output package information
if(NOT lifecycle_FIND_QUIETLY)
  message(STATUS "Found lifecycle: 0.0.3 (${lifecycle_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'lifecycle' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(lifecycle_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${lifecycle_DIR}/${_extra}")
endforeach()
