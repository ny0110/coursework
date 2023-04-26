cmake_minimum_required(VERSION 3.24)
project(untitled5)

set(CMAKE_CXX_STANDARD 23)

# Add source files
set(SOURCES
        sources/Cookbook.cpp
        sources/Recipe.cpp
        )

# Add header files
set(HEADERS
        headers/Cookbook.h
        headers/Recipe.h
        )

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS} main.cpp )