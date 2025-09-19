find_package(GTest REQUIRED)

add_executable(CategoryTest CategoryTest.cpp)
target_link_libraries(CategoryTest GTest::GTest GTest::Main)
target_include_directories(CategoryTest PRIVATE ${GTEST_INCLUDE_DIRS})

add_test(NAME CategoryTest COMMAND CategoryTest)