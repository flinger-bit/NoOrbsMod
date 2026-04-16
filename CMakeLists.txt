cmake_minimum_required(VERSION 3.21)

project(NoOrbsMod)

set(CMAKE_CXX_STANDARD 20)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)
