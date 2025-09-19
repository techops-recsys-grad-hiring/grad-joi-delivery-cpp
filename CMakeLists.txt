cmake_minimum_required(VERSION 3.23)
project(grad_hire_delivery_cpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSIONS OFF)

list(APPEND CMAKE_MODULE_PATH ${CMAKE_BINARY_DIR})
set(CMAKE_CXX_STANDARD 17)

include_directories(include)
add_subdirectory(src/problems)

enable_testing()
add_subdirectory(tests)