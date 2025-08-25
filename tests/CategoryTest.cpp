// write goggle test cases for Category class
#include <gtest/gtest.h>
#include "../model/Category.hpp"

TEST(CategoryTest, ToString) {
    EXPECT_EQ(toString(Category::DAIRY), "DAIRY");
    EXPECT_EQ(toString(Category::BAKERY), "BAKERY");
    EXPECT_EQ(toString(Category::SNACKS), "SNACKS");
    EXPECT_EQ(toString(Category::MEAT), "MEAT");
    EXPECT_EQ(toString(Category::BEVERAGES), "BEVERAGES");
    EXPECT_EQ(toString(Category::VEGETABLES_FRUITS), "VEGETABLES_FRUITS");
    EXPECT_EQ(toString(Category::WHEAT_RICE_GRAINS), "WHEAT_RICE_GRAINS");
    EXPECT_EQ(toString(Category::DEFAULT), "DEFAULT");
}
// Add more tests as needed
// --- IGNORE ---
