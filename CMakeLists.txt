cmake_minimum_required(VERSION 3.0)
project(DBPlus)

include_directories(include)

add_executable(DBPlus
  src/main.cpp
  src/queryProcess/create.cpp
  src/queryProcess/executeQuery.cpp
  src/queryProcess/validateQuery.cpp

  src/include/create.hpp
  src/include/executeQuery.hpp
  src/include/validateQuery.hpp
  src/util/util.hpp
  src/util/util.cpp
  src/util/enums.hpp
  src/util/datatypes.hpp
)
