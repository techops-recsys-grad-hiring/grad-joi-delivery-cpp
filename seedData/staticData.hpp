#ifndef SEED_DATA_HPP
#define SEED_DATA_HPP

#include <string>
#include <vector>

#include "../model/DistanceMap.hpp"
#include "../model/Item.hpp"
#include "../model/Store.hpp"

using namespace std;

class SeedData {
 private:
  static string ZONEA{"ZONEA"};
  static string ZONEB = "ZONEB";
  static string ZONEC = "ZONEC";

 public:
  static vector<DistanceMap> distanceMaps;
  static vector<Store> stores;
  static vector<Item> items;
};

vector<DistanceMap> SeedData::distanceMaps = {
    DistanceMap(ZONEA, ZONEA, 0), DistanceMap(ZONEA, ZONEB, 3), DistanceMap(ZONEA, ZONEC, 6), DistanceMap(ZONEB, ZONEC, 3),
    DistanceMap(ZONEB, ZONEB, 0), DistanceMap(ZONEB, ZONEC, 8), DistanceMap(ZONEC, ZONEC, 0)};

vector<string> itemList1 = {"Milk", "Eggs"};
vector<string> itemList2 = {"Bread", "Milks"};
vector<string> itemList3 = {"Juice", "Bread"};

vector<Store> SeedData::stores = {Store("1", ZONEA, itemList1), Store("2", ZONEB, itemList2), Store("3", ZONEC, itemList3)};

vector<Item> SeedData::items = {Item("1", "Notebook", "", 15), Item("2", "Keyboard", "", 50), Item("3", "Mouse", "", 25),
                                Item("3", "Monitor", "", 75)};

#endif  // SEED_DATA_HPP
