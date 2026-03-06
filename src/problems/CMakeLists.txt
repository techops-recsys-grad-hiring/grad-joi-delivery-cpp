add_executable(tw_delivery main.cpp)

target_link_libraries(tw_delivery PRIVATE tw::delivery::lib)

add_executable(tw::delivery ALIAS tw_delivery)