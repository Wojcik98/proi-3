//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "Rickshaw.h"

Rickshaw::Rickshaw() {
    type = "Riksza";
    wheelsNo = 3;
    axisNo = 2;
    askRoof();
}

void Rickshaw::askRoof() {
    cout << "Czy pojazd ma dach (t/n): ";
    string tmp;
    cin >> tmp;
    hasRoof = tmp == "t";
}

map<string, string> Rickshaw::getInfo() {
    map<string, string> tmp = PeopleVehicle::getInfo();
    tmp["Dach"] = hasRoof ? "tak" : "nie";

    return tmp;
}
