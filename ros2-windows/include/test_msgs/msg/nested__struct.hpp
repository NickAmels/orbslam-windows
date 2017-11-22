// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__NESTED__STRUCT_HPP_
#define TEST_MSGS__MSG__NESTED__STRUCT_HPP_

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
#include "test_msgs/msg/primitives.hpp"  // primitive_values

#ifndef _WIN32
# define DEPRECATED_test_msgs_msg_Nested __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_msg_Nested __declspec(deprecated)
#endif

namespace test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Nested_
{
  using Type = Nested_<ContainerAllocator>;

  Nested_()
  {
  }
  explicit Nested_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
// *INDENT-ON*
  {
    (void)_alloc;
  }

  // field types and members
  using _primitive_values_type =
      test_msgs::msg::Primitives_<ContainerAllocator>;
  _primitive_values_type primitive_values;

  // setters for named parameter idiom
  Type * set__primitive_values(
    const test_msgs::msg::Primitives_<ContainerAllocator> & _arg)
  {
    this->primitive_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_msgs::msg::Nested_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_msgs::msg::Nested_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_msgs::msg::Nested_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_msgs::msg::Nested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_msgs::msg::Nested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::Nested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_msgs::msg::Nested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::Nested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_msgs::msg::Nested_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_msgs::msg::Nested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_msg_Nested
    std::shared_ptr<test_msgs::msg::Nested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_msg_Nested
    std::shared_ptr<test_msgs::msg::Nested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Nested_ & other) const
  {
    if (this->primitive_values != other.primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const Nested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Nested_

// alias to use template instance with default allocator
using Nested =
    test_msgs::msg::Nested_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__NESTED__STRUCT_HPP_
