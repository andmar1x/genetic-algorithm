cmake_minimum_required(VERSION 3.2)

set(PROJECT_NAME GeneticAlgorithm)

project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.hpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
