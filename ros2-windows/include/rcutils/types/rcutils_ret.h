// Copyright 2017 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RCUTILS__TYPES__RCUTILS_RET_H_
#define RCUTILS__TYPES__RCUTILS_RET_H_

#if __cplusplus
extern "C"
{
#endif

typedef int rcutils_ret_t;
#define RCUTILS_RET_OK 0
#define RCUTILS_RET_WARN 1
#define RCUTILS_RET_ERROR 2

/// Failed to allocate memory return code.
#define RCUTILS_RET_BAD_ALLOC 10
/// Invalid argument return code.
#define RCUTILS_RET_INVALID_ARGUMENT 11
/// Not enough storage to do operation.
#define RCUTILS_RET_NOT_ENOUGH_SPACE 12

/// Given string map was either already initialized or was not zero initialized.
#define RCUTILS_RET_STRING_MAP_ALREADY_INIT 30
/// Given string map is invalid, perhaps not initialized yet.
#define RCUTILS_RET_STRING_MAP_INVALID 31
/// Given key not found in given string map.
#define RCUTILS_RET_STRING_KEY_NOT_FOUND 32

#if __cplusplus
}
#endif

#endif  // RCUTILS__TYPES__RCUTILS_RET_H_
