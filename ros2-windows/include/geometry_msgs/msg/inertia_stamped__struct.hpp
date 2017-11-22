// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef GEOMETRY_MSGS__MSG__INERTIA_STAMPED__STRUCT_HPP_
#define GEOMETRY_MSGS__MSG__INERTIA_STAMPED__STRUCT_HPP_

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32) && defined(ERROR)
  #undef ERROR
#endif

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <array>
#include <memory>
#include <string>
#include <vector>

// include message dependencies
#include "geometry_msgs/msg/inertia.hpp"  // inertia
#include "std_msgs/msg/header.hpp"  // header

#ifndef _WIN32
# define DEPRECATED_geometry_msgs_msg_InertiaStamped __attribute__((deprecated))
#else
# define DEPRECATED_geometry_msgs_msg_InertiaStamped __declspec(deprecated)
#endif

namespace geometry_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct InertiaStamped_
{
  using Type = InertiaStamped_<ContainerAllocator>;

  InertiaStamped_()
  {
  }
  explicit InertiaStamped_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _header_type =
      std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _inertia_type =
      geometry_msgs::msg::Inertia_<ContainerAllocator>;
  _inertia_type inertia;

  // setters for named parameter idiom
  Type * set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return this;
  }
  Type * set__inertia(
    const geometry_msgs::msg::Inertia_<ContainerAllocator> & _arg)
  {
    this->inertia = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      geometry_msgs::msg::InertiaStamped_<ContainerAllocator> *;
  using ConstRawPtr =
      const geometry_msgs::msg::InertiaStamped_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::InertiaStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    geometry_msgs::msg::InertiaStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_geometry_msgs_msg_InertiaStamped
    std::shared_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_geometry_msgs_msg_InertiaStamped
    std::shared_ptr<geometry_msgs::msg::InertiaStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const InertiaStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->inertia != other.inertia) {
      return false;
    }
    return true;
  }
  bool operator!=(const InertiaStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct InertiaStamped_

// alias to use template instance with default allocator
using InertiaStamped =
    geometry_msgs::msg::InertiaStamped_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace geometry_msgs

#endif  // GEOMETRY_MSGS__MSG__INERTIA_STAMPED__STRUCT_HPP_
