//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "Bus.h"

Bus::Bus() {
    askWheels();
    askAxis();
    askPeopleCapacity();
}

void Bus::askPeopleCapacity() {
    cout << "Podaj liczbę miejsc siedzących: ";
    cin >> sittingNo;
    cout << "Podaj liczbę miejsc stojących: ";
    cin >> standingNo;
}

map<string, string> Bus::getInfo() {
    map<string, string> tmp = FuelVehicle::getInfo();
    tmp["Liczba miejsc siedzących"] = to_string(sittingNo);
    tmp["Liczba miejsc stojących"] = to_string(standingNo);

    return tmp;
}
