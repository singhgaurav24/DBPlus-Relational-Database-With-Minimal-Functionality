cmake_minimum_required(VERSION 3.0)
project(DBPlus)

include_directories(include)

add_executable(DBPlus
  src/main.cpp
  src/queryProcess/create.cpp
  src/include/create.hpp
  src/util/util.hpp
  src/util/datatypes.hpp
)
