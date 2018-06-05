//
// Created by Wojcik98 on 29.05.18.
//

#include "Owner.h"
#include "Vehicle.h"

Owner::Owner(string id) {
    this->id = id;
}

const string &Owner::getFullName() const {
    return displayedName;
}

void Owner::addVehicle(Vehicle *vehicle) {
    vehicles[vehicle->getVIN()] = vehicle;
}

void Owner::removeVehicle(Vehicle *vehicle) {
    vehicles.erase(vehicle->getVIN());
}

vector<Vehicle *> Owner::getVehicles() {
    vector<Vehicle *> result;
    for (auto tmp : vehicles) {
        result.push_back(tmp.second);
    }

    return result;
}
