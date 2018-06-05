//
// Created by Wojcik98 on 29.05.18.
//

#ifndef INC_3PRJ_OWNER_H
#define INC_3PRJ_OWNER_H

#include <string>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Vehicle;

class Owner {
public:
    explicit Owner(string id);

    const string &getFullName() const;

    void addVehicle(Vehicle *vehicle);

    void removeVehicle(Vehicle *vehicle);

    vector<Vehicle *> getVehicles();

protected:
    map<string, Vehicle *> vehicles;

    string id;
    string displayedName;
};


#endif //INC_3PRJ_OWNER_H
