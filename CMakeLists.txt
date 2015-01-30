cmake_minimum_required(VERSION 2.8.4)
project(IA_2015)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c11")

set(SOURCE_FILES libUtil.c main.c)
add_executable(IA_2015 ${SOURCE_FILES})