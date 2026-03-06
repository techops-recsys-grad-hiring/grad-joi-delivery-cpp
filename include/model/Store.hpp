#pragma once

#include <string>
#include <vector>

namespace tw::delivery {
  struct Store {
    std::string storeId;
    std::string zone;
    std::vector<std::string> items;
  };
}