# generated from
# rosidl_typesupport_c/rosidl_typesupport_c-extras.cmake.in

find_package(ament_cmake_core QUIET REQUIRED)

include("${rosidl_typesupport_c_DIR}/get_used_typesupports.cmake")

ament_register_extension(
  "rosidl_generate_interfaces"
  "rosidl_typesupport_c"
  "rosidl_typesupport_c_generate_interfaces.cmake")

set(rosidl_typesupport_c_SUPPORTS_POCO TRUE)

set(rosidl_typesupport_c_BIN
  "${rosidl_typesupport_c_DIR}/../../../lib/rosidl_typesupport_c/rosidl_typesupport_c")
normalize_path(rosidl_typesupport_c_BIN
  "${rosidl_typesupport_c_BIN}")

set(rosidl_typesupport_c_GENERATOR_FILES
  "${rosidl_typesupport_c_DIR}/../../../Lib/site-packages/rosidl_typesupport_c/__init__.py")
normalize_path(rosidl_typesupport_c_GENERATOR_FILES
  "${rosidl_typesupport_c_GENERATOR_FILES}")

set(rosidl_typesupport_c_TEMPLATE_DIR
  "${rosidl_typesupport_c_DIR}/../resource")
normalize_path(rosidl_typesupport_c_TEMPLATE_DIR
  "${rosidl_typesupport_c_TEMPLATE_DIR}")
