#pragma once

#include <string>
#include <vector>

#include "model/DistanceMap.hpp"
#include "model/Item.hpp"
#include "model/Store.hpp"

struct StaticData {
  inline static const std::string ZONEA{"ZONEA"};
  inline static const std::string ZONEB{"ZONEB"};
  inline static const std::string ZONEC{"ZONEC"};

  inline static std::vector<DistanceMap> distanceMaps {
    {ZONEA, ZONEA, 0},
    {ZONEA, ZONEB, 3},
    {ZONEA, ZONEC, 6},
    {ZONEB, ZONEC, 3},
    {ZONEB, ZONEB, 0},
    {ZONEC, ZONEC, 0}
  };

  inline static std::vector<Store> stores {
    {"1", ZONEA, {"Milk", "Eggs"}},
    {"2", ZONEB, {"Bread", "Milk"}},
    {"3", ZONEC, {"Juice", "Bread"}}
  };

  inline static std::vector<Item> items {
    {"1", "Notebook", "", 15},
    {"2", "Keyboard", "", 50},
    {"3", "Mouse", "", 25},
    {"4", "Monitor", "", 75}
  };
};