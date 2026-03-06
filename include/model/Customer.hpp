#pragma once

#include <string>

#include "model/LoyaltyTier.hpp"

struct Customer {
  std::string customerId;
  std::string firstName;
  std::string lastName;
  std::string loyaltyPoints;
  LoyaltyTier tier{LoyaltyTier::SILVER};

  Customer() = default;

  Customer(std::string customerId, std::string firstName, std::string lastName)
      : customerId{std::move(customerId)}, firstName{std::move(firstName)}, lastName{std::move(lastName)} {}
};
