//
// Created by Wojcik98 on 31.05.18.
//

#include <iostream>
#include "PeopleVehicle.h"

PeopleVehicle::PeopleVehicle() {
    askPeopleEndurance();
}

void PeopleVehicle::askPeopleEndurance() {
    cout << "Wytrzymałość ludzi napędzających (w godzinach): ";
    cin >> peopleEndurance;
}

map<string, string> PeopleVehicle::getInfo() {
    map<string, string> tmp = Vehicle::getInfo();
    tmp["Wytrzymałość ludzi napędzających"] = to_string(peopleEndurance);

    return tmp;
}
