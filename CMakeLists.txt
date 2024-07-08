
cmake_minimum_required(VERSION 3.27)

project(main LANGUAGES CXX)
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g")

include_directories(src)
set(SOURCES src/main.cpp src/class.cpp)

add_executable(main ${SOURCES})