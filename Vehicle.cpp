//
// Created by Wojcik98 on 29.05.18.
//

#include <iostream>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle() {
    askVIN();
    askPlate();
    askProduction();
    askWeight();
    askDims();
    askColor();
}

void Vehicle::askVIN() {
    cout << "Podaj nr VIN: ";
    cin >> vin;
}

void Vehicle::askPlate() {
    cout << "Podaj nr rejestracyjny: ";
    cin >> plate;
}

void Vehicle::askProduction() {
    cout << "Podaj rok produkcji: ";
    cin >> productionDate;
}

void Vehicle::askWeight() {
    cout << "Podaj wagę: ";
    cin >> weight;
}

void Vehicle::askDims() {
    cout << "Podaj wymiary (szerokość długość wysokość): ";
    cin >> width >> length >> height;
}

void Vehicle::askColor() {
    cout << "Podaj kolor: ";
    cin >> color;
}

void Vehicle::askWheels() {
    cout << "Podaj liczbę kół: ";
    cin >> wheelsNo;
}

void Vehicle::askAxis() {
    cout << "Podaj liczbę osi: ";
    cin >> axisNo;
}

string Vehicle::getVIN() {
    return vin;
}

void Vehicle::askOC() {
    cout << "Podaj nr OC: ";
    cin >> oc;
}

map<string, string> Vehicle::getInfo() {
    map<string, string> tmp;

    tmp["Właściciel"] = owner->getFullName();
    tmp["Waga"] = to_string(weight);
    tmp["Kolor"] = color;
    tmp["VIN"] = vin;
    tmp["Nr rejestracyjny"] = plate;
    tmp["Rozmiary"] = to_string(width) + " x " + to_string(length) + " x " + to_string(height);
    tmp["Typ"] = type;
    tmp["Data produkcji"] = productionDate;
    tmp["OC"] = oc;
    tmp["Liczba kół"] = to_string(wheelsNo);
    tmp["Liczba osi"] = to_string(axisNo);

    return tmp;
}

void Vehicle::setOwner(Owner *owner) {
    this->owner = owner;
}

void Vehicle::changeOwner(Owner *owner) {
    this->owner->removeVehicle(this);
    this->owner = owner;
    owner->addVehicle(this);
}
