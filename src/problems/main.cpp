#include <iostream>
#include <string>

double calculateCost(const double distanceKm) {
  if (distanceKm <= 0) {
    std::cerr << "Distance must be positive.\n";
    return -1;  // Indicate an error
  }

  const double baseCost = 50.0;
  if (distanceKm <= 5) {
    return baseCost;
  }

  const double extraDistance = distanceKm - 5;

  return baseCost + extraDistance * 10;
}

int main() {
  const double cost = calculateCost(8.0);
  std::cout << "Delivery cost for 8 km: " << cost << '\n';

  return 0;
}