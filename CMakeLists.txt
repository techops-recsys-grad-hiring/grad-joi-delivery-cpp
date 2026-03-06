cmake_minimum_required(VERSION 3.23)

project(grad_hire_delivery_cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON) 
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_library(tw_delivery_lib INTERFACE)
target_include_directories(tw_delivery_lib INTERFACE
    $<BUILD_INTERFACE:${CMAKE_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)
add_library(tw::delivery::lib ALIAS tw_delivery_lib)

add_subdirectory(src)
add_subdirectory(tests)