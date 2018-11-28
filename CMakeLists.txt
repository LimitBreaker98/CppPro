cmake_minimum_required(VERSION 3.9)   # CMake version check
project(CppPro)               # Create project "simple_example"
set(CMAKE_CXX_STANDARD 11)            # Enable c++11 standard


add_executable(CppPro bitwise.cpp)       # Add executable target with source files listed in SOURCE_FILES variable