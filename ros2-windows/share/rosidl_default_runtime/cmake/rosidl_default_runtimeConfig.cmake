# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_rosidl_default_runtime_CONFIG_INCLUDED)
  return()
endif()
set(_rosidl_default_runtime_CONFIG_INCLUDED TRUE)

# output package information
if(NOT rosidl_default_runtime_FIND_QUIETLY)
  message(STATUS "Found rosidl_default_runtime: 0.0.3 (${rosidl_default_runtime_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'rosidl_default_runtime' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(rosidl_default_runtime_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake")
foreach(_extra ${_extras})
  include("${rosidl_default_runtime_DIR}/${_extra}")
endforeach()
