add_executable(tw_delivery main.cpp)

target_include_directories(tw_delivery PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(tw::delivery ALIAS tw_delivery)