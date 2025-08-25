cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project(grad-hire-delivery-cpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSIONS OFF)
add_executable(grad-hire-delivery-cpp main.cpp)
target_include_directories(grad-hire-delivery-cpp PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

