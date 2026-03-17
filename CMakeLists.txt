cmake_minimum_required(VERSION 4.1)
project(gralculator)

set(CMAKE_CXX_STANDARD 20)

add_executable(gralculator main.cpp
        person.cpp
        person.h)
