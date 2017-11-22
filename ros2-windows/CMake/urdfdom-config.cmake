if (urdfdom_CONFIG_INCLUDED)
  return()
endif()
set(urdfdom_CONFIG_INCLUDED TRUE)

set(urdfdom_INCLUDE_DIRS "C:/J/workspace/packaging_windows/ws/install/include" "C:/ProgramData/chocolatey/lib/tinyxml-usestl/include")

foreach(lib urdfdom_sensor;urdfdom_model_state;urdfdom_model;urdfdom_world)
  set(onelib "${lib}-NOTFOUND")
  set(onelibd "${lib}-NOTFOUND")
  find_library(onelib ${lib}
    PATHS "C:/J/workspace/packaging_windows/ws/install/lib"
    NO_DEFAULT_PATH)
  find_library(onelibd ${lib}d
    PATHS "C:/J/workspace/packaging_windows/ws/install/lib"
    NO_DEFAULT_PATH)
  if(onelib-NOTFOUND AND onelibd-NOTFOUND)
    message(FATAL_ERROR "Library '${lib}' in package urdfdom is not installed properly")
  endif()
  if(onelib)
    list(APPEND urdfdom_LIBRARIES optimized ${onelib})
  endif()
  if(onelibd)
    list(APPEND urdfdom_LIBRARIES debug ${onelibd})
  endif()
endforeach()

foreach(dep urdfdom_headers;console_bridge)
  if(NOT ${dep}_FOUND)
    find_package(${dep})
  endif()
  list(APPEND urdfdom_INCLUDE_DIRS ${${dep}_INCLUDE_DIRS})
  list(APPEND urdfdom_LIBRARIES ${${dep}_LIBRARIES})
endforeach()
