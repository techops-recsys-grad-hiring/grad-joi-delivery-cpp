#pragma once

#include <string>

#include "model/LoyaltyTier.hpp"

using namespace std;

class Customer {
 private:
  std::string customerId;
  std::string firstName;
  std::string lastName;
  std::string loyaltyPoints;
  LoyaltyTier tier;

 public:
  // Default constructor
  Customer() : tier(LoyaltyTier::SILVER) {}  // default to SILVER or any you prefer

  // Parameterized constructor
  Customer(const std::string& customerId, const std::string& firstName, const std::string& lastName)
      : customerId(customerId), firstName(firstName), lastName(lastName), tier(LoyaltyTier::SILVER) {}

  // Setters
  void setLoyaltyPoints(const std::string& loyaltyPoints) { this->loyaltyPoints = loyaltyPoints; }

  void setTier(LoyaltyTier tier) { this->tier = tier; }

  // Getters
  std::string getCustomerId() const { return customerId; }
  std::string getFirstName() const { return firstName; }
  std::string getLastName() const { return lastName; }
  std::string getLoyaltyPoints() const { return loyaltyPoints; }
  LoyaltyTier getTier() const { return tier; }
};
