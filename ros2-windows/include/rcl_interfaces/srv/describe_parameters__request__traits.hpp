// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef RCL_INTERFACES__SRV__DESCRIBE_PARAMETERS__REQUEST__TRAITS_HPP_
#define RCL_INTERFACES__SRV__DESCRIBE_PARAMETERS__REQUEST__TRAITS_HPP_

#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

#ifndef __ROSIDL_GENERATOR_CPP_TRAITS
#define __ROSIDL_GENERATOR_CPP_TRAITS

template<typename T>
struct has_fixed_size : std::false_type {};

template<typename T>
struct has_bounded_size : std::false_type {};

#endif  // __ROSIDL_GENERATOR_CPP_TRAITS

#include "rcl_interfaces/srv/describe_parameters__request__struct.hpp"


template<>
struct has_fixed_size<rcl_interfaces::srv::DescribeParameters_Request>
  : std::integral_constant<bool, false>{};

template<>
struct has_bounded_size<rcl_interfaces::srv::DescribeParameters_Request>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // RCL_INTERFACES__SRV__DESCRIBE_PARAMETERS__REQUEST__TRAITS_HPP_
