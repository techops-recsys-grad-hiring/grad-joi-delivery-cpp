#pragma once

#include <string>
#include <vector>

#include "model/Delivery.hpp"  // Assuming Delivery is a class defined elsewhere

namespace tw::delivery {
  struct DeliveryPartner {
    std::string id;
    std::string name;
    std::vector<Delivery> deliveries;  // Assuming Delivery is a class defined elsewhere

    void addDelivery(Delivery delivery) { deliveries.push_back(std::move(delivery)); }
  };
}
