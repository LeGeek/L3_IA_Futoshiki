cmake_minimum_required(VERSION 2.8.4)
project(IA_2015)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu99")

set(SOURCE_FILES libUtil.c main.c parser.c)
add_executable(IA_2015 ${SOURCE_FILES})
include_directories( "grilles" )