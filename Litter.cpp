//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "Litter.h"

Litter::Litter() {
    type = "Lektyka";
    wheelsNo = 0;
    axisNo = 0;
    askPeopleNo();
}

void Litter::askPeopleNo() {
    cout << "Ile ludzi napędza: ";
    cin >> peopleNo;
}

map<string, string> Litter::getInfo() {
    map<string, string> tmp = PeopleVehicle::getInfo();
    tmp["Ilość ludzi napędzających"] = to_string(peopleNo);

    return tmp;
}
