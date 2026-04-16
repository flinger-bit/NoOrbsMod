cmake_minimum_required(VERSION 3.21)

project(NoOrbsMod LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Geode usa su propio sistema de toolchain cuando se compila desde el template
find_package(Geode REQUIRED)

add_library(${PROJECT_NAME} SHARED
    src/main.cpp
)

# Incluye headers del mod
target_include_directories(${PROJECT_NAME} PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link con Geode (esto es lo importante que te faltaba)
target_link_libraries(${PROJECT_NAME} PRIVATE
    Geode::Geode
)

# Define mod metadata para Geode loader
geode_mod(${PROJECT_NAME}
    ID neuru.noorbs
    NAME "No Orbs Mod"
    VERSION 1.0.0
    AUTHOR "Neuru"
    DESCRIPTION "Disables all orb rewards in Geometry Dash"
)
