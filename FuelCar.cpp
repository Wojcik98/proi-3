//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "FuelCar.h"

FuelCar::FuelCar() {
    type = "Samochód spalinowy";
    wheelsNo = 4;
    axisNo = 2;
    askAC();
}

void FuelCar::askAC() {
    cout << "Czy samochód ma klimatyzację (t/n): ";
    string tmp;
    cin >> tmp;
    hasAC = tmp == "t";
}

map<string, string> FuelCar::getInfo() {
    map<string, string> tmp = FuelVehicle::getInfo();
    tmp["Klimatyzacja"] = hasAC ? "tak" : "nie";

    return tmp;
}
