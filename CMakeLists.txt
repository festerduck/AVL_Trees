cmake_minimum_required(VERSION 3.10)
project(AVLProject)

include_directories(include)

file(GLOB SOURCES "src/*.cpp")

add_executable(AVL ${SOURCES} main.cpp)
