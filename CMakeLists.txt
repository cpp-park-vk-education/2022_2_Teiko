cmake_minimum_required(VERSION 3.16)
project(project)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address -fsanitize=leak")

add_subdirectory(tests)

set(PROJECT_SRCS
        src/hello.cpp
        include/hello.h
        )

add_library(hello SHARED ${PROJECT_SRCS})