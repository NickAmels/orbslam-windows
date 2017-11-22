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

#ifndef RCUTILS__LOGGING_H_
#define RCUTILS__LOGGING_H_

#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>

#include "rcutils/visibility_control.h"

#if __cplusplus
extern "C"
{
#endif

/// The flag if the logging system has been initialized.
RCUTILS_PUBLIC
extern bool g_rcutils_logging_initialized;

/// Initialize the logging system.
/**
 * The function is called automatically when using the logging macros.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 */
RCUTILS_PUBLIC
void rcutils_logging_initialize();

/// The structure identifying the caller location in the source code.
typedef struct rcutils_log_location_t
{
  /// The name of the function containing the log call.
  const char * function_name;
  /// The name of the source file containing the log call.
  const char * file_name;
  /// The line number containing the log call.
  size_t line_number;
} rcutils_log_location_t;

/// The severity levels of log message.
enum RCUTILS_LOG_SEVERITY
{
  RCUTILS_LOG_SEVERITY_DEBUG = 0,  ///< The debug log level
  RCUTILS_LOG_SEVERITY_INFO = 1,  ///< The info log level
  RCUTILS_LOG_SEVERITY_WARN = 2,  ///< The warn log level
  RCUTILS_LOG_SEVERITY_ERROR = 3,  ///< The error log level
  RCUTILS_LOG_SEVERITY_FATAL = 4,  ///< The fatal log level
};

/// The function signature to log messages.
/**
 * \param The pointer to the location struct
 * \param The severity level
 * \param The name of the logger
 * \param The format string
 * \param The variable argument list
 */
typedef void (* rcutils_logging_output_handler_t)(
  rcutils_log_location_t *,  // location
  int,  // severity
  const char *,  // name
  const char *,  // format
  va_list *  // args
);

/// The function pointer of the current output handler.
RCUTILS_PUBLIC
extern rcutils_logging_output_handler_t g_rcutils_logging_output_handler;

/// Get the current output handler.
/**
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \return The function pointer of the current output handler.
 */
RCUTILS_PUBLIC
rcutils_logging_output_handler_t rcutils_logging_get_output_handler();

/// Set the current output handler.
/**
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param function The function pointer of the output handler to be used.
 */
RCUTILS_PUBLIC
void rcutils_logging_set_output_handler(rcutils_logging_output_handler_t function);

/// The global severity threshold before calling the output handler.
/**
 * The global severity threshold is being checked after the conditions when
 * using the various logging macros.
 *
 * \param severity The global severity threshold to be used.
 */
RCUTILS_PUBLIC
extern int g_rcutils_logging_severity_threshold;

/// Get the global severity threshold.
/**
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \return The severity threshold.
 */
RCUTILS_PUBLIC
int rcutils_logging_get_severity_threshold();

/// Set the global severity threshold.
/**
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param severity The severity threshold to be used.
 */
RCUTILS_PUBLIC
void rcutils_logging_set_severity_threshold(int severity);

/// Log a message.
/**
 * The attributes of this function are also being influenced by the currently
 * set output handler.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No
 * Thread-Safe        | No
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param location The pointer to the location struct
 * \param severity The severity level
 * \param name The name of the logger
 * \param format The format string
 * \param ... The variable arguments
 */
RCUTILS_PUBLIC
void rcutils_log(
  rcutils_log_location_t * location,
  int severity,
  const char * name,
  const char * format,
  ...);

/// The default output handler outputs log messages to the standard streams.
/**
 * The messages with a severity `DEBUG` and `INFO` are written to `stdout`.
 * The messages with a severity `WARN`, `ERROR`, and `FATAL` are written to
 * `stderr`.
 * For each message the severity and name is prepended and the location
 * information is appended when available.
 *
 * <hr>
 * Attribute          | Adherence
 * ------------------ | -------------
 * Allocates Memory   | No, for formatted messages <= 1023 characters
 *                    | Yes, for formatted messages >= 1024 characters
 * Thread-Safe        | Yes, if the underlying *printf functions are
 * Uses Atomics       | No
 * Lock-Free          | Yes
 *
 * \param location The pointer to the location struct
 * \param severity The severity level
 * \param name The name of the logger
 * \param format The format string
 * \param args The variable argument list
 */
RCUTILS_PUBLIC
void rcutils_logging_console_output_handler(
  rcutils_log_location_t * location,
  int severity, const char * name, const char * format, va_list * args);

// Provide the compiler with branch prediction information
#ifndef _WIN32
/**
 * \def RCUTILS_LIKELY
 * Instruct the compiler to optimize for the case where the argument equals 1.
 */
# define RCUTILS_LIKELY(x) __builtin_expect((x), 1)
/**
 * \def RCUTILS_UNLIKELY
 * Instruct the compiler to optimize for the case where the argument equals 0.
 */
# define RCUTILS_UNLIKELY(x) __builtin_expect((x), 0)
#else
/**
 * \def RCUTILS_LIKELY
 * No op since Windows doesn't support providing branch prediction information.
 */
# define RCUTILS_LIKELY(x) (x)
/**
 * \def RCUTILS_UNLIKELY
 * No op since Windows doesn't support providing branch prediction information.
 */
# define RCUTILS_UNLIKELY(x) (x)
#endif  // _WIN32

/**
 * \def RCUTILS_LOGGING_AUTOINIT
 * \brief Initialize the rcl logging library.
 * Usually it is unnecessary to call the macro directly.
 * All logging macros ensure that this has been called once.
 */
#define RCUTILS_LOGGING_AUTOINIT \
  if (RCUTILS_UNLIKELY(!g_rcutils_logging_initialized)) { \
    rcutils_logging_initialize(); \
  }

#if __cplusplus
}
#endif

#endif  // RCUTILS__LOGGING_H_
