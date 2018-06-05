//
// Created by Wojcik98 on 29.05.18.
//

#include <iostream>
#include "ElectricVehicle.h"
#include "Vehicle.h"

ElectricVehicle::ElectricVehicle() {
    askBattery();
}

void ElectricVehicle::askBattery() {
    cout << "Podaj pojemność baterii: ";
    cin >> batteryCapacity;
}

map<string, string> ElectricVehicle::getInfo() {
    map<string, string> tmp =  Vehicle::getInfo();
    tmp["Pojemność baterii"] = to_string(batteryCapacity);

    return tmp;
}
