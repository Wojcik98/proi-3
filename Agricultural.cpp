//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "Agricultural.h"

Agricultural::Agricultural() {
    type = "Rolniczy";
    askWheels();
    askAxis();
    askExternMachines();
}

void Agricultural::askExternMachines() {
    cout << "Czy pojazd może napędzać zewnętrzne maszyny (t/n): ";
    string tmp;
    cin >> tmp;
    canPowerExtMachines = tmp == "t";
}

map<string, string> Agricultural::getInfo() {
    map<string, string> tmp = FuelVehicle::getInfo();
    tmp["Czy może napędzać inne maszyny?"] = canPowerExtMachines ? "tak" : "nie";

    return tmp;
}
