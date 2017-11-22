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

#ifndef RCUTILS__FILESYSTEM_H_
#define RCUTILS__FILESYSTEM_H_

#if __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>

#include "rcutils/macros.h"
#include "rcutils/visibility_control.h"

/// Return current working directory.
/**
 * \param[in] buffer Allocated string to store current directory path to
 * \param[in] max_length maximum length to be stored in buffer
 * \return bool True if success
 *              False if buffer is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
RCUTILS_WARN_UNUSED
bool
rcutils_get_cwd(char * buffer, size_t max_length);

/// Check if the provided path points to a directory.
/**
 * \param[in] abs_path Absolute path to check.
 * \return bool True if directory
 *              False if abs_path is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
bool
rcutils_is_directory(const char * abs_path);

/// Check if the provided path points to a file.
/**
 * \param[in] abs_path Absolute path to check.
 * \return bool True if file
 *              False if abs_path is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
bool
rcutils_is_file(const char * abs_path);

/// Check if the provided path points to an existing file/folder.
/**
 * \param[in] abs_path Absolute path to check.
 * \return bool True if the path exists
 *              False if abs_path is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
bool
rcutils_exists(const char * abs_path);

/// Check if the provided path points to a file/folder readable by current user.
/**
 * \param[in] abs_path Absolute path to check.
 * \return bool True if the file is readable
 *              False if abs_path is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
bool
rcutils_is_readable(const char * abs_path);

/// Check if the provided path points to a file/folder writable by current user.
/**
 * \param[in] abs_path Absolute path to check.
 * \return bool True if the file is writable
 *              False if abs_path is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
bool
rcutils_is_writable(const char * abs_path);

/// Check if the provided path points to a file/folder both readable and writable by current user.
/**
 * \param[in] abs_path Absolute path to check.
 * \return bool True if the file is redable and writable False otherwise
 *              False if abs_path is NULL
 *              False on failure
 */
RCUTILS_PUBLIC
bool
rcutils_is_readable_and_writable(const char * abs_path);

/// Concatenate path adding the right delimiter according to the platform.
/**
 * \param[in] left_hand_path
 * \param[in] right_hand_path
 * \return const char * concatenated path on success
 *         NULL on invalid arguments
 *         NULL on failure
 */
RCUTILS_PUBLIC
const char *
rcutils_join_path(const char * left_hand_path, const char * right_hand_path);

#if __cplusplus
}
#endif

#endif  // RCUTILS__FILESYSTEM_H_
