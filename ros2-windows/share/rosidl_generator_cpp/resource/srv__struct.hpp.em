// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

@#######################################################################
@# EmPy template for generating <srv>__struct.hpp files
@#
@# Context:
@#  - spec (rosidl_parser.ServiceSpecification)
@#    Parsed specification of the .srv file
@#  - get_header_filename_from_msg_name (function)
@#######################################################################
@
@{
header_guard_parts = [
    spec.pkg_name, 'srv',
    get_header_filename_from_msg_name(spec.srv_name) + '__struct_hpp']
header_guard_variable = '__'.join([x.upper() for x in header_guard_parts]) + '_'
}@
#ifndef @(header_guard_variable)
#define @(header_guard_variable)

#include "@(spec.pkg_name)/srv/@(get_header_filename_from_msg_name(spec.srv_name))__request.hpp"
#include "@(spec.pkg_name)/srv/@(get_header_filename_from_msg_name(spec.srv_name))__response.hpp"

namespace @(spec.pkg_name)
{

namespace srv
{

struct @(spec.srv_name)
{
  using Request = @(spec.pkg_name)::srv::@(spec.srv_name)_Request;
  using Response = @(spec.pkg_name)::srv::@(spec.srv_name)_Response;
};

}  // namespace srv

}  // namespace @(spec.pkg_name)

#endif  // @(header_guard_variable)
