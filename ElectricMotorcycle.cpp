//
// Created by Wojcik98 on 30.05.18.
//

#include <iostream>
#include "ElectricMotorcycle.h"

ElectricMotorcycle::ElectricMotorcycle() {
    type = "Motocykl elektryczny";
    wheelsNo = 2;
    axisNo = 2;
    askFastCharge();
}

void ElectricMotorcycle::askFastCharge() {
    cout << "Czy motocykl ma szybkie ładowanie (t/n): ";
    string tmp;
    cin >> tmp;
    hasFastCharge = tmp == "t";
}


map<string, string> ElectricMotorcycle::getInfo(){
    map<string, string> tmp = ElectricVehicle::getInfo();
    tmp["Szybkie ładowanie"] = hasFastCharge ? "tak" : "nie";

    return tmp;
};
