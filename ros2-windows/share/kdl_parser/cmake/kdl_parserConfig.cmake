# generated from ament/cmake/core/template/nameConfig.cmake.in

# prevent multiple inclusion
if(_kdl_parser_CONFIG_INCLUDED)
  return()
endif()
set(_kdl_parser_CONFIG_INCLUDED TRUE)

# output package information
if(NOT kdl_parser_FIND_QUIETLY)
  message(STATUS "Found kdl_parser: 1.12.7 (${kdl_parser_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'kdl_parser' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(kdl_parser_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${kdl_parser_DIR}/${_extra}")
endforeach()
