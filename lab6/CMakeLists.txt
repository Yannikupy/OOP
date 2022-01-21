cmake_minimum_required(VERSION 3.16)
project(lab6)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(lab6
        figure.h
        HListItem.cpp
        HListItem.h
        main.cpp
        point.cpp
        point.h
        square.cpp
        square.h
        TAllocatorBlock.h
        TLinkedList.cpp
        TLinkedList.h
        TVector.h)
