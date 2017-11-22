// generated from rosidl_generator_cpp/resource/msg__struct.hpp.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__STRUCT_HPP_
#define TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__STRUCT_HPP_

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
#include "test_msgs/msg/dynamic_array_primitives.hpp"  // dynamic_array_primitive_values

#ifndef _WIN32
# define DEPRECATED_test_msgs_msg_DynamicArrayPrimitivesNested __attribute__((deprecated))
#else
# define DEPRECATED_test_msgs_msg_DynamicArrayPrimitivesNested __declspec(deprecated)
#endif

namespace test_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DynamicArrayPrimitivesNested_
{
  using Type = DynamicArrayPrimitivesNested_<ContainerAllocator>;

  DynamicArrayPrimitivesNested_()
  {
  }
  explicit DynamicArrayPrimitivesNested_(const ContainerAllocator & _alloc)
// *INDENT-OFF* (prevent uncrustify from making unnecessary indents here)
  : dynamic_array_primitive_values(_alloc)
// *INDENT-ON*
  {
  }

  // field types and members
  using _dynamic_array_primitive_values_type =
      std::vector<test_msgs::msg::DynamicArrayPrimitives_<ContainerAllocator>, typename ContainerAllocator::template rebind<test_msgs::msg::DynamicArrayPrimitives_<ContainerAllocator>>::other>;
  _dynamic_array_primitive_values_type dynamic_array_primitive_values;

  // setters for named parameter idiom
  Type * set__dynamic_array_primitive_values(
    const std::vector<test_msgs::msg::DynamicArrayPrimitives_<ContainerAllocator>, typename ContainerAllocator::template rebind<test_msgs::msg::DynamicArrayPrimitives_<ContainerAllocator>>::other> & _arg)
  {
    this->dynamic_array_primitive_values = _arg;
    return this;
  }

  // constants

  // pointer types
  using RawPtr =
      test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator> *;
  using ConstRawPtr =
      const test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator> *;
  using SharedPtr =
      std::shared_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator>>;
  using ConstSharedPtr =
      std::shared_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
    test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
    test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
      std::unique_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
      std::weak_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator>>;
  using ConstWeakPtr =
      std::weak_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED_test_msgs_msg_DynamicArrayPrimitivesNested
    std::shared_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED_test_msgs_msg_DynamicArrayPrimitivesNested
    std::shared_ptr<test_msgs::msg::DynamicArrayPrimitivesNested_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DynamicArrayPrimitivesNested_ & other) const
  {
    if (this->dynamic_array_primitive_values != other.dynamic_array_primitive_values) {
      return false;
    }
    return true;
  }
  bool operator!=(const DynamicArrayPrimitivesNested_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DynamicArrayPrimitivesNested_

// alias to use template instance with default allocator
using DynamicArrayPrimitivesNested =
    test_msgs::msg::DynamicArrayPrimitivesNested_<std::allocator<void>>;

// constants requiring out of line definition

}  // namespace msg

}  // namespace test_msgs

#endif  // TEST_MSGS__MSG__DYNAMIC_ARRAY_PRIMITIVES_NESTED__STRUCT_HPP_
