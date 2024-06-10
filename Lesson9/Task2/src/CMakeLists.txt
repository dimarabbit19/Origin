cmake_minimum_required(VERSION 3.2)
project(my_first_cmake_project)

set(CMAKE_CXX_STANDARD 23)
file (GLOB CPPS "*.cpp")
add_executable(my_first_cmake_program ${CPPS})
