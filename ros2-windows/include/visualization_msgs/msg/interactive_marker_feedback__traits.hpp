// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_FEEDBACK__TRAITS_HPP_
#define VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_FEEDBACK__TRAITS_HPP_

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

#include "visualization_msgs/msg/interactive_marker_feedback__struct.hpp"


template<>
struct has_fixed_size<visualization_msgs::msg::InteractiveMarkerFeedback>
  : std::integral_constant<bool, false>{};

template<>
struct has_bounded_size<visualization_msgs::msg::InteractiveMarkerFeedback>
  : std::integral_constant<bool, false>{};

}  // namespace rosidl_generator_traits

#endif  // VISUALIZATION_MSGS__MSG__INTERACTIVE_MARKER_FEEDBACK__TRAITS_HPP_
