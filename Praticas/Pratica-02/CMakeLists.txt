# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(pratica-02 LANGUAGES CXX)

# generate a library from sources
add_library(message
  STATIC
    src/Message.hpp
    src/Message.cpp
  )

add_executable(hello-world src/hello-world.cpp)

target_link_libraries(hello-world message)
