#pragma once

#include <string>
#include <vector>

struct Store {
  std::string storeId;
  std::string zone;
  std::vector<std::string> items;
};