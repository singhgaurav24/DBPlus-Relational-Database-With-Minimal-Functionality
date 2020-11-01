
cmake_minimum_required(VERSION 3.0)
project(src)

#use this if we have cpp files
add_library(${PROJECT_NAME} util2/util.cpp) 
#target_include_directories(${PROJECT_NAME} PUBLIC include)

