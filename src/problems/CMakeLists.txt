add_executable(app main.cpp)

target_include_directories(app PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)