//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "Military.h"

using namespace std;

Military::Military() {
    type = "Wojskowy";
    askWheels();
    askAxis();
    askWeaponry();
}

void Military::askWeaponry() {
    cout << "Podaj uzbrojenie: ";
    getline(cin, weaponry);
}

map<string, string> Military::getInfo() {
    map<string, string> tmp = FuelVehicle::getInfo();
    tmp["Uzbrojenie"] = weaponry;

    return tmp;
}
