// generated from rosidl_generator_c/resource/msg__struct.h.em
// generated code does not contain a copyright notice

#ifndef TEST_MSGS__MSG__BOUNDED_ARRAY_NESTED__STRUCT_H_
#define TEST_MSGS__MSG__BOUNDED_ARRAY_NESTED__STRUCT_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// include message dependencies
// primitive_values
#include "test_msgs/msg/primitives__struct.h"

// constants for array fields with an upper bound
// primitive_values
enum
{
  test_msgs__msg__BoundedArrayNested__primitive_values__MAX_SIZE = 4
};

/// Struct of message test_msgs/BoundedArrayNested
typedef struct test_msgs__msg__BoundedArrayNested
{
  test_msgs__msg__Primitives__Array primitive_values;
} test_msgs__msg__BoundedArrayNested;

/// Struct for an array of messages
typedef struct test_msgs__msg__BoundedArrayNested__Array
{
  test_msgs__msg__BoundedArrayNested * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} test_msgs__msg__BoundedArrayNested__Array;

#if __cplusplus
}
#endif

#endif  // TEST_MSGS__MSG__BOUNDED_ARRAY_NESTED__STRUCT_H_
