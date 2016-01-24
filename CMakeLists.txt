cmake_minimum_required(VERSION 3.3)
project(lambda)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp main.h)
add_executable(lambda ${SOURCE_FILES})
