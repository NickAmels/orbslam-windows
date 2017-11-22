# generated from
# rosidl_typesupport_introspection_c/
#   rosidl_typesupport_introspection_c-extras.cmake.in

find_package(ament_cmake_core QUIET REQUIRED)
# TODO
# instead of being an extension for "rosidl_generate_interfaces"
# this should be an extension of "rosidl_generator_c"
# which can then ensure that there is only one
ament_register_extension(
  "rosidl_generate_interfaces"
  "rosidl_typesupport_introspection_c"
  "rosidl_typesupport_introspection_c_generate_interfaces.cmake")

set(rosidl_typesupport_introspection_c_BIN
  "${rosidl_typesupport_introspection_c_DIR}/../../../lib/rosidl_typesupport_introspection_c/rosidl_typesupport_introspection_c")
normalize_path(rosidl_typesupport_introspection_c_BIN
  "${rosidl_typesupport_introspection_c_BIN}")

set(rosidl_typesupport_introspection_c_GENERATOR_FILES
  "${rosidl_typesupport_introspection_c_DIR}/../../../Lib/site-packages/rosidl_typesupport_introspection_c/__init__.py")
normalize_path(rosidl_typesupport_introspection_c_GENERATOR_FILES
  "${rosidl_typesupport_introspection_c_GENERATOR_FILES}")

set(rosidl_typesupport_introspection_c_TEMPLATE_DIR
  "${rosidl_typesupport_introspection_c_DIR}/../resource")
normalize_path(rosidl_typesupport_introspection_c_TEMPLATE_DIR
  "${rosidl_typesupport_introspection_c_TEMPLATE_DIR}")
