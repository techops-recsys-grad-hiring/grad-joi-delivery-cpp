#pragma once

#include <string>

#include "model/Category.hpp"

namespace tw::delivery {
  struct Item {
    std::string id;
    std::string name;
    std::string description;
    double price{0.0};
    Category category{Category::DEFAULT};
  };
}
