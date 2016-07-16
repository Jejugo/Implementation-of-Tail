cmake_minimum_required(VERSION 3.4)
project(AulaAlg2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES xtail.c)
add_executable(AulaAlg2 ${SOURCE_FILES})