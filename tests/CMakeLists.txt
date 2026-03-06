include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.12.0
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(tw_delivery_test CategoryTest.cpp)

target_link_libraries(tw_delivery_test PRIVATE
    gtest_main
)

target_include_directories(tw_delivery_test PRIVATE
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(tw::delivery::test ALIAS tw_delivery_test)

include(GoogleTest)
gtest_discover_tests(tw_delivery_test)
