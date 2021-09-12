cmake_minimum_required(VERSION 3.16)
project(lab)

set(CMAKE_CXX_STANDARD 14)

add_executable(lab main.cpp square.cpp square.h figure.h rectangle.cpp rectangle.h trapezoid.cpp trapezoid.h point.cpp point.h)
