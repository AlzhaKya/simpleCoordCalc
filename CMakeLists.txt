cmake_minimum_required(VERSION 3.28)
project(simpleCoordCalc)

set(CMAKE_CXX_STANDARD 20)

add_executable(simpleCoordCalc main.cpp
        converter.cpp
        converter.h++
        )
