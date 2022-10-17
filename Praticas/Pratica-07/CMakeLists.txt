# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(pratica-07 LANGUAGES CXX)

message("C++ compiler flags: ${CMAKE_CXX_FLAGS}")

list(APPEND flags "-fPIC" "-Wall")
if(NOT WIN32)
  list(APPEND flags "-Wextra" "-Wpedantic")
endif()

message("Library's flags list: ${flags}")

add_library(geometry
  STATIC
    src/geometry_circle.cpp
    src/geometry_circle.hpp
    src/geometry_polygon.cpp
    src/geometry_polygon.hpp
    src/geometry_rhombus.cpp
    src/geometry_rhombus.hpp
    src/geometry_square.cpp
    src/geometry_square.hpp
  )

target_compile_options(geometry
  PRIVATE
    ${flags}
  )

add_executable(compute-areas src/compute-areas.cpp)

target_compile_options(compute-areas
  PRIVATE
    "-fPIC"
  )

target_link_libraries(compute-areas geometry)
