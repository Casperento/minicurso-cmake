# set minimum cmake version
cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

# project name and language
project(pratica-08 LANGUAGES CXX)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

add_library(animals
  SHARED
    src/Animal.cpp
    src/Animal.hpp
    src/Cat.cpp
    src/Cat.hpp
    src/Dog.cpp
    src/Dog.hpp
    src/Factory.hpp
  )

set_target_properties(animals
  PROPERTIES
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    CXX_STANDARD_REQUIRED ON
    POSITION_INDEPENDENT_CODE 1
  )

add_executable(animal-farm src/animal-farm.cpp)

set_target_properties(animal-farm
  PROPERTIES
    CXX_STANDARD 14
    CXX_EXTENSIONS OFF
    CXX_STANDARD_REQUIRED ON
  )

target_link_libraries(animal-farm animals)
