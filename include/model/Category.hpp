#pragma once

#include <iostream>
#include <string>

enum class Category { DAIRY, BAKERY, SNACKS, MEAT, BEVERAGES, VEGETABLES_FRUITS, WHEAT_RICE_GRAINS, DEFAULT };

// Optional: helper function to convert enum to string
inline std::string toString(Category category) {
  switch (category) {
    case Category::DAIRY:
      return "DAIRY";
    case Category::BAKERY:
      return "BAKERY";
    case Category::SNACKS:
      return "SNACKS";
    case Category::MEAT:
      return "MEAT";
    case Category::BEVERAGES:
      return "BEVERAGES";
    case Category::VEGETABLES_FRUITS:
      return "VEGETABLES_FRUITS";
    case Category::WHEAT_RICE_GRAINS:
      return "WHEAT_RICE_GRAINS";
    default:
      return "DEFAULT";
  }
}
