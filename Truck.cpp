//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "Truck.h"

Truck::Truck() {
    type = "Ciężarowy";
    askWheels();
    askAxis();
    askExplosives();
}

void Truck::askExplosives() {
    cout << "Czy pojazd może przewozić materiały wybuchowe (t/n): ";
    string tmp;
    cin >> tmp;
    canTransportExplosives = tmp == "t";
}

map<string, string> Truck::getInfo() {
    map<string, string> tmp = FuelVehicle::getInfo();
    tmp["Uprawnienia do materiałów wybuchowych"] = canTransportExplosives ? "tak" : "nie";

    return tmp;
}
