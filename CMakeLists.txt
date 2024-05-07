cmake_minimum_required(VERSION 3.28)
project(Yume)

set(CMAKE_CXX_STANDARD 20)
add_compile_options(-finput-charset=UTF-8)
add_compile_options(-fexec-charset=GBK)

add_executable(Yume main.cpp
        storage.hpp
        student.hpp)
