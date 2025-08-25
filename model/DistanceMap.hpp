#ifndef     DISTANCE_MAP_H
#define     DISTANCE_MAP_H

#include <string>
using namespace std;


class DistanceMap {
private:
    string zoneTo;
    string zoneFrom;
    int distance;
public:
    // Default constructor
    DistanceMap() : zoneTo(""), zoneFrom(""), distance(0) {}

    // Parameterized constructor
    DistanceMap(const string& zoneTo, const string& zoneFrom, int distance)
        : zoneTo(zoneTo), zoneFrom(zoneFrom), distance(distance) {}

    // Getters
    string getZoneTo() const {
        return zoneTo;
    }
    string getZoneFrom() const {
        return zoneFrom;
    }
    int getDistance() const {
        return distance;
    }

    // Setters
    void setZoneTo(const string& zoneTo) {
        this->zoneTo = zoneTo;
    }
    void setZoneFrom(const string& zoneFrom) {
        this->zoneFrom = zoneFrom;
    }
    void setDistance(int distance) {
        this->distance = distance;
    }
    // Method to display distance information
    void display() const {
        cout << "Distance from " << zoneFrom << " to " << zoneTo << " is " << distance << " km." << endl;
    }
};


#endif  // DISTANCE_MAP_H
