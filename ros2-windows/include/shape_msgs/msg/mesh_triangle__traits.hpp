// generated from rosidl_generator_cpp/resource/msg__traits.hpp.em
// generated code does not contain a copyright notice

#ifndef SHAPE_MSGS__MSG__MESH_TRIANGLE__TRAITS_HPP_
#define SHAPE_MSGS__MSG__MESH_TRIANGLE__TRAITS_HPP_

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

#include "shape_msgs/msg/mesh_triangle__struct.hpp"


template<>
struct has_fixed_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true>{};

template<>
struct has_bounded_size<shape_msgs::msg::MeshTriangle>
  : std::integral_constant<bool, true>{};

}  // namespace rosidl_generator_traits

#endif  // SHAPE_MSGS__MSG__MESH_TRIANGLE__TRAITS_HPP_
