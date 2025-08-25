enable_testing()

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# include_directories(${Boost_INCLUDE_DIRS})


add_executable(CategoryTest CategoryTest.cpp)
target_link_libraries(CategoryTest GTest::GTest GTest::Main)

add_test(NAME CategoryTest COMMAND CategoryTest)