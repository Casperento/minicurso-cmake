# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(pratica-09 LANGUAGES CXX)

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

# we wish to compile the library with the optimization flag: -O3
target_compile_options(geometry
  PRIVATE
    -O3
  )

list(
  APPEND sources_with_lower_optimization
    src/geometry_circle.cpp
    src/geometry_rhombus.cpp
  )

# we use the IN LISTS foreach syntax to set source properties
message(STATUS "Setting source properties using IN LISTS syntax:")
foreach(_source IN LISTS sources_with_lower_optimization)
  set_source_files_properties(${_source} PROPERTIES COMPILE_FLAGS -O2) # https://cmake.org/cmake/help/latest/command/set_source_files_properties.html
  message(STATUS "Appending -O2 flag for ${_source}")
endforeach()

# we demonstrate the plain foreach syntax to query source properties
# which requires to expand the contents of the variable
message(STATUS "Querying sources properties using plain syntax:")
foreach(_source ${sources_with_lower_optimization})
  get_source_file_property(_flags ${_source} COMPILE_FLAGS) # https://cmake.org/cmake/help/latest/command/get_source_file_property.html
  message(STATUS "Source ${_source} has the following extra COMPILE_FLAGS: ${_flags}")
endforeach()

add_executable(compute-areas src/compute-areas.cpp)

target_link_libraries(compute-areas geometry)
