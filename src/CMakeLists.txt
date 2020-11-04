
cmake_minimum_required(VERSION 3.0)
project(src)

#use this if we have cpp files
#add_subdirectory(src)
#include_directories(include)
add_library(${PROJECT_NAME} queryProcess/create.cpp) 

target_include_directories(${PROJECT_NAME} PUBLIC include)

