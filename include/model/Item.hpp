#pragma once

#include <string>

#include "model/Category.hpp"

using namespace std;

class Item {
 private:
  std::string id;
  std::string name;
  std::string description;
  double price;
  Category category;

 public:
  // Default constructor
  Item() : id(""), name(""), description(""), price(0.0), category(Category::DEFAULT) {}

  // Parameterized constructor
  Item(const std::string& id, const std::string& name, const std::string& description, double price, Category category)
      : id(id), name(name), description(description), price(price), category(category) {}
  // Parameterized constructor
  Item(const std::string& id, const std::string& name, const std::string& description, double price)
      : id(id), name(name), description(description), price(price), category(Category::DEFAULT) {}

  // Getters
  std::string getId() const { return id; }
  std::string getName() const { return name; }
  std::string getDescription() const { return description; }
  double getPrice() const { return price; }
  Category getCategory() const { return category; }

  // Setters
  void setId(const std::string& id) { this->id = id; }
  void setName(const std::string& name) { this->name = name; }
  void setDescription(const std::string& description) { this->description = description; }
  void setPrice(double price) { this->price = price; }
  void setCategory(Category category) { this->category = category; }
};
