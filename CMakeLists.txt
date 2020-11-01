#cmake_minimum_required(VERSION 2.6 FATAL_ERROR)
#project(dbplus)
#include_directories(${PROJECT_SOURCE_DIR})

#add_executable(database src/main.cpp)

cmake_minimum_required(VERSION 3.0)
project(DBPlus)

add_subdirectory(src)
add_executable(DBPlus src/main.cpp)

