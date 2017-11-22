# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_robot_state_publisher_CONFIG_INCLUDED)
  return()
endif()
set(_robot_state_publisher_CONFIG_INCLUDED TRUE)

# output package information
if(NOT robot_state_publisher_FIND_QUIETLY)
  message(STATUS "Found robot_state_publisher: 1.13.4 (${robot_state_publisher_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'robot_state_publisher' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(robot_state_publisher_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${robot_state_publisher_DIR}/${_extra}")
endforeach()
