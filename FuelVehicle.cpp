//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "FuelVehicle.h"

FuelVehicle::FuelVehicle() {
    askFuelType();
    askEngineDisplacement();
}

void FuelVehicle::askFuelType() {
    cout << "Podaj typ paliwa: ";
    cin >> fuelType;
}

void FuelVehicle::askEngineDisplacement() {
    cout << "Podaj pojemność silnika: ";
    cin >> engineDisplacement;
}

map<string, string> FuelVehicle::getInfo() {
    map<string, string> tmp = Vehicle::getInfo();
    tmp["Typ paliwa"] = fuelType;
    tmp["Pojemność silnika"] = to_string(engineDisplacement);

    return tmp;
}
