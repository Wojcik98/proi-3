//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "ElectricCar.h"

ElectricCar::ElectricCar() {
    type = "Samochód elektryczny";
    wheelsNo = 4;
    axisNo = 4;
    askAutopilot();
}

void ElectricCar::askAutopilot() {
    cout << "Czy samochód ma autopilota (t/n): ";
    string tmp;
    cin >> tmp;
    autopilot = tmp == "t";
}

map<string, string> ElectricCar::getInfo() {
    map<string, string> tmp = ElectricVehicle::getInfo();
    tmp["Autopilot"] = autopilot ? "tak" : "nie";

    return tmp;
}
