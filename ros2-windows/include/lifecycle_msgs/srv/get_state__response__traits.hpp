// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef LIFECYCLE_MSGS__SRV__GET_STATE__RESPONSE__TRAITS_HPP_
#define LIFECYCLE_MSGS__SRV__GET_STATE__RESPONSE__TRAITS_HPP_

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

#include "lifecycle_msgs/srv/get_state__response__struct.hpp"


template<>
struct has_fixed_size<lifecycle_msgs::srv::GetState_Response>
  : std::integral_constant<bool, has_fixed_size<lifecycle_msgs::msg::State>::value>{};

template<>
struct has_bounded_size<lifecycle_msgs::srv::GetState_Response>
  : std::integral_constant<bool, has_bounded_size<lifecycle_msgs::msg::State>::value>{};

}  // namespace rosidl_generator_traits

#endif  // LIFECYCLE_MSGS__SRV__GET_STATE__RESPONSE__TRAITS_HPP_
