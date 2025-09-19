#include <iostream>
#include <string>

#include "model/Category.hpp"

using namespace std;

double calculateCost(double distanceKm) {
  if (distanceKm <= 0) {
    cerr << "Distance must be positive." << endl;
    return -1;  // Indicate an error
  }
  double baseCost = 50.0;
  if (distanceKm <= 5) {
    return baseCost;
  } else {
    double extraDistance = distanceKm - 5;
    return baseCost + extraDistance * 10;  // 10 per km for first 5 km
  }
}

int main() {
  double cost = calculateCost(8.0);
  cout << "Delivery cost for 8 km: " << cost << endl;
  return 0;
}