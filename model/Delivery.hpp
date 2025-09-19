#pragma once

#include <optional>  // for std::optional

class Delivery {
 private:
  int timeInMinutes;
  int distance;

 public:
  // Default constructor
  Delivery() : timeInMinutes(0), distance(0) {}

  // Parameterized constructor
  Delivery(int timeInMinutes, int distance) : timeInMinutes(timeInMinutes), distance(distance) {}

  // Getter & Setter for timeInMinutes
  int getTimeInMinutes() const { return timeInMinutes; }

  void setTimeInMinutes(int timeInMinutes) { this->timeInMinutes = timeInMinutes; }

  // Getter & Setter for distance
  int getDistance() const { return distance; }

  void setDistance(int distance) { this->distance = distance; }
};
