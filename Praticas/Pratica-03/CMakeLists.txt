# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(pratica-03 LANGUAGES CXX)

# introduce a toggle for using a library
set(USE_LIBRARY OFF)

message(STATUS "Compile sources into a library? ${USE_LIBRARY}")

# BUILD_SHARED_LIBS is a global flag offered by CMake
# to toggle the behavior of add_library
set(BUILD_SHARED_LIBS OFF)

# list sources
list(APPEND _sources src/Message.hpp src/Message.cpp)

if(USE_LIBRARY)
  # add_library will create a static library
  # since BUILD_SHARED_LIBS is OFF
  add_library(message ${_sources})

  add_executable(hello-world src/hello-world.cpp)

  target_link_libraries(hello-world message)
else()
  add_executable(hello-world src/hello-world.cpp ${_sources})
endif()
