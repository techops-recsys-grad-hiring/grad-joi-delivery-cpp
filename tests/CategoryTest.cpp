// write goggle test cases for Category class
#include <gtest/gtest.h>

#include "model/Category.hpp"

TEST(CategoryTest, ToString) {
  using namespace tw;
  EXPECT_EQ(toString(delivery::Category::DAIRY), "DAIRY");
  EXPECT_EQ(toString(delivery::Category::BAKERY), "BAKERY");
  EXPECT_EQ(toString(delivery::Category::SNACKS), "SNACKS");
  EXPECT_EQ(toString(delivery::Category::MEAT), "MEAT");
  EXPECT_EQ(toString(delivery::Category::BEVERAGES), "BEVERAGES");
  EXPECT_EQ(toString(delivery::Category::VEGETABLES_FRUITS), "VEGETABLES_FRUITS");
  EXPECT_EQ(toString(delivery::Category::WHEAT_RICE_GRAINS), "WHEAT_RICE_GRAINS");
  EXPECT_EQ(toString(delivery::Category::DEFAULT), "DEFAULT");
}
// Add more tests as needed
// --- IGNORE ---
