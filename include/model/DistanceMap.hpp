#pragma once

#include <iostream>
#include <string>

struct DistanceMap {
  std::string zoneTo;
  std::string zoneFrom;
  int distance;

  void display() const { std::cout << "Distance from " << zoneFrom << " to " << zoneTo << " is " << distance << " km.\n"; }
};
