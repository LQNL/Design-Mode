cmake_minimum_required(VERSION 3.16)

project(Builder)

add_executable(main main.cpp)

set_target_properties(main PROPERTIES
                        CXX_STANDARD 17
                        CMAKE_CXX_STANDARD_REQUIRED ON)