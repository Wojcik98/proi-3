//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "FuelMotorcycle.h"

FuelMotorcycle::FuelMotorcycle() {
    type = "Motocykl spalinowy";
    wheelsNo = 2;
    axisNo = 2;
    askTrailer();
}

void FuelMotorcycle::askTrailer() {
    cout << "Czy motor ma przyczepkę (t/n): ";
    string tmp;
    cin >> tmp;
    hasTrailer = tmp == "t";
}

map<string, string> FuelMotorcycle::getInfo() {
    map<string, string> tmp = FuelVehicle::getInfo();
    tmp["Przyczepa"] = hasTrailer ? "tak" : "nie";

    return tmp;
}
