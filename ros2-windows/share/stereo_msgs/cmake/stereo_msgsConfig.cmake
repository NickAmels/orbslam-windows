# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_stereo_msgs_CONFIG_INCLUDED)
  return()
endif()
set(_stereo_msgs_CONFIG_INCLUDED TRUE)

# output package information
if(NOT stereo_msgs_FIND_QUIETLY)
  message(STATUS "Found stereo_msgs: 0.0.3 (${stereo_msgs_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'stereo_msgs' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(stereo_msgs_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "rosidl_cmake-extras.cmake;ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_libraries-extras.cmake;ament_cmake_export_include_directories-extras.cmake")
foreach(_extra ${_extras})
  include("${stereo_msgs_DIR}/${_extra}")
endforeach()
