// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef SENSOR_MSGS__MSG__TIME_REFERENCE__TRAITS_HPP_
#define SENSOR_MSGS__MSG__TIME_REFERENCE__TRAITS_HPP_

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

#include "sensor_msgs/msg/time_reference__struct.hpp"


template<>
struct has_fixed_size<sensor_msgs::msg::TimeReference>
  : std::integral_constant<bool, false>{};

template<>
struct has_bounded_size<sensor_msgs::msg::TimeReference>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // SENSOR_MSGS__MSG__TIME_REFERENCE__TRAITS_HPP_
