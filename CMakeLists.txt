cmake_minimum_required(VERSION 3.4)
project(Console)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(LIBRARY_FILES Console.cpp Console.h)
set(SOURCE_FILES main.cpp ${LIBRARY_FILES})

add_executable(Console_Debug ${SOURCE_FILES})
add_library(Console STATIC ${LIBRARY_FILES})