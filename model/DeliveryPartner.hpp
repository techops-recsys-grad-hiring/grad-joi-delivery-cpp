#pragma once

#include <string>
#include <vector>

#include "model/Delivery.hpp"  // Assuming Delivery is a class defined elsewhere

using namespace std;

class DeliveryPartner {
 private:
  string id;
  string name;
  vector<Delivery> deliveries;  // Assuming Delivery is a class defined elsewhere
 public:
  // Default constructor
  DeliveryPartner() : id(""), name("") {}
  // Parameterized constructor
  DeliveryPartner(const string& id, const string& name, const vector<Delivery>& del) : id(id), name(name), deliveries(del) {}

  // Getters
  string getId() const { return id; }

  string getName() const { return name; }

  vector<Delivery> getDeliveries() const { return deliveries; }

  // Setters
  void setId(const string& id) { this->id = id; }
  void setName(const string& name) { this->name = name; }
  void setDeliveries(const vector<Delivery>& deliveries) { this->deliveries = deliveries; }
  // Method to add a delivery
  void addDelivery(const Delivery& delivery) { deliveries.push_back(delivery); }
};
