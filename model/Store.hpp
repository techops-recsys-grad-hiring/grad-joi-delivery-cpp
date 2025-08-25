#ifndef STORE_H
#define STORE_H

#include <string>
#include <vector>
using namespace std;

class Store {
private:
    string storeId;
    string zone;
    vector<string> items;
public:
    Store(): storeId(""), zone("") {}
    Store(const string& id, const string& zName, const vector<string>& itemLists) : storeId(id), zone(zName), items(itemLists) {
    }

    // Getters
    string getStoreId() const { return storeId; }
    string getZone() const { return zone; }
    vector<string> getItems() const { return items; }

    // Setters
    void setStoreId(const string& id) { this->storeId = id; }
    void setZone(const string& zName) { this->zone = zName; }
    void setItems(const vector<string>& itemLists) { this->items = itemLists; }
    
};
#endif // STORE_H