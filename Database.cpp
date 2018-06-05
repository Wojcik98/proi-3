//
// Created by Wojcik98 on 30.05.18.
//

#include <iostream>
#include "Database.h"

Database::Database() {

}

void Database::addVehicle(Vehicle *vehicle) {
    vehicles[vehicle->getVIN()] = vehicle;
}

void Database::setOC(string vin) {
    vehicles[vin]->askOC();
}

void Database::setOwner(string vin, Owner *owner) {
    Vehicle *vehicle = vehicles[vin];

    vehicle->changeOwner(owner);
}

vector<Vehicle *> Database::getVehicles() {
    vector<Vehicle *> tmp;
    for (auto it : vehicles) {
        tmp.push_back(it.second);
    }

    return tmp;
}

Vehicle* Database::getVehicle(string vin) {
    return vehicles[vin];
}

Database::~Database() {
    for(auto tmp : vehicles){
        delete tmp.second;
    }
}
