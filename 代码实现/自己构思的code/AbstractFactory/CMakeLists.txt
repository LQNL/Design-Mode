cmake_minimum_required(VERSION 3.16)

project(AbstractFactory)

add_executable(main main.cpp)

# target_include_directories(main PRIVATE .)

set_target_properties(main PROPERTIES
                      CXX_STANDARD 17
                      CXX_STANDARD_REQUIRED ON)

