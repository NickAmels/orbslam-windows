// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef ACTIONLIB_MSGS__MSG__GOAL_STATUS_ARRAY__TRAITS_HPP_
#define ACTIONLIB_MSGS__MSG__GOAL_STATUS_ARRAY__TRAITS_HPP_

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

#include "actionlib_msgs/msg/goal_status_array__struct.hpp"


template<>
struct has_fixed_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false>{};

template<>
struct has_bounded_size<actionlib_msgs::msg::GoalStatusArray>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // ACTIONLIB_MSGS__MSG__GOAL_STATUS_ARRAY__TRAITS_HPP_
