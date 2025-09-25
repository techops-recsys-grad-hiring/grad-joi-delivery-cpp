add_executable(CategoryTest CategoryTest.cpp)
target_link_libraries(CategoryTest GTest::gtest_main)
target_include_directories(CategoryTest PRIVATE ${GTEST_INCLUDE_DIRS})

include(GoogleTest)
gtest_discover_tests(CategoryTest)
