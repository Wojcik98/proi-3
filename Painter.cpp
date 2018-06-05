//
// Created by Wojcik98 on 30.05.18.
//

#include <string>
#include <iostream>
#include "Painter.h"
#include "ElectricMotorcycle.h"
#include "Person.h"
#include "Coownership.h"
#include "Company.h"
#include "Agricultural.h"
#include "Bus.h"
#include "FuelCar.h"
#include "FuelMotorcycle.h"
#include "Rickshaw.h"
#include "Litter.h"
#include "Truck.h"
#include "Military.h"
#include "ElectricCar.h"

using namespace std;

Painter::Painter() {

}

void Painter::setOwners(map<string, Owner *> *owners) {
    this->owners = owners;
}

void Painter::setModel(Database *model) {
    this->model = model;
}

void Painter::showMenu() {
    cout << "Wybierz operację do wykonania (1-):" << endl <<
         "1) Dodaj pojazd" << endl <<
         "2) Pokaż pojazdy" << endl <<
         "3) Zmień właściciela pojazdu" << endl <<
         "4) Dodaj OC" << endl <<
         "5) Pokaż dane pojazdu" << endl <<
         "6) Pokaż pojazdy właściciela" << endl <<
         "99) Wyjście" << endl;
}

void Painter::showVehicles() {
    vector<Vehicle *> tmp = model->getVehicles();
    cerr << "size: " << tmp.size();
    for (auto el : tmp) {
        auto info = el->getInfo();
        cout << info["Właściciel"] << " " << info["VIN"] << " " << info["Typ"] << endl;
    }
}

Painter::Option Painter::getOption() {  //TODO include all possibilities
    string tmp;
    cin >> tmp;
    if (tmp == ADD_VEHICLE) {
        return this->add;
    } else if (tmp == SHOW_VEHICLES) {
        return this->show;
    } else if (tmp == CHANGE_OWNER) {
        return this->change;
    } else if (tmp == SET_OC) {
        return this->oc;
    } else if (tmp == SHOW_VEHICLE) {
        return this->vehicle;
    } else if (tmp == SHOW_OWNER) {
        return this->owner;
    } else if (tmp == EXIT) {
        return this->exit;
    } else {
        return this->invalid;
    }
}

void Painter::addVehicle() {
    string id;
    cout << "Podaj nr identyfikacyjny właściciela (PESEL głównego właściciela albo NIP firmy): ";
    cin >> id;

    Owner *owner = getOwner(id);

    string type;
    cout << "Podaj typ samochodu (1-10):" << endl <<
         "1) Motocykl elektryczny" << endl <<
         "2) Samochód elektryczny" << endl <<
         "3) Pojazd rolniczy" << endl <<
         "4) Autobus" << endl <<
         "5) Samochód spalionwy" << endl <<
         "6) Motocykl spalinowy" << endl <<
         "7) Pojazd wojskowy" << endl <<
         "8) Pojazd ciężarowy" << endl <<
         "9) Lektyka" << endl <<
         "10) Riksza" << endl;
    cin >> type;
    Vehicle *newOne = getNewVehicle(type);  //TODO smart pointer? <- yes, but later, i'm lazy

    newOne->setOwner(owner);
    model->addVehicle(newOne);
}

Vehicle *Painter::getNewVehicle(string type) {
    if (type == "1") {
        return new ElectricMotorcycle();
    } else if (type == "2") {
        return new ElectricCar();
    } else if (type == "3") {
        return new Agricultural();
    } else if (type == "4") {
        return new Bus();
    } else if (type == "5") {
        return new FuelCar();
    } else if (type == "6") {
        return new FuelMotorcycle();
    } else if (type == "7") {
        return new Military();
    } else if (type == "8") {
        return new Truck();
    } else if (type == "9") {
        return new Litter();
    } else if (type == "10") {
        return new Rickshaw();
    }
}

void Painter::changeOwner() {
    cout << "Podaj nr VIN pojazdu, który chcesz przerejstrować: ";
    string vin;
    cin >> vin;

    cout << "Podaj nr identyfikacyjny nowego właściciela (PESEL głównego właściciela albo NIP firmy): ";
    string id;
    cin >> id;
    model->setOwner(vin, getOwner(id));
}

void Painter::setOC() {
    cout << "Podaj nr VIN samochodu: ";
    string vin;
    cin >> vin;
    model->setOC(vin);
}

void Painter::showVehicle() {
    cout << "Podaj nr VIN samochodu: ";
    string vin;
    cin >> vin;
    auto info = model->getVehicle(vin)->getInfo();

    cout << "Właściciel" << ": " << info["Właściciel"] << endl;
    cout << "VIN" << ": " << info["VIN"] << endl;
    cout << "Nr rejestracyjny" << ": " << info["Nr rejestracyjny"] << endl;
    for (auto tmp : info) {
        if (tmp.first != "Właściciel" && tmp.first != "VIN" && tmp.first != "Nr rejestracyjny") {
            cout << tmp.first << ": " << tmp.second << endl;
        }
    }
}

void Painter::showOwner() {
    cout << "Podaj ID właściciela: ";
    string id;
    cin >> id;

    Owner *owner = this->getOwner(id);
    cout << owner->getFullName() << endl;
    auto cont = owner->getVehicles();
    for (auto tmp : cont) {
        auto info = tmp->getInfo();
        cout << info["Właściciel"] << " " << info["VIN"] << " " << info["Typ"] << endl;
    }
}

Owner *Painter::getOwner(string id) {
    if (owners->find(id) != owners->end()) {
        return (*owners)[id];
    } else {
        return addOwner(id);
    }
}

Owner *Painter::addOwner(string id) {
    cout << "Podaj typ właściceiela (1-3):" << endl <<
         "1) Osoba prywatna" << endl <<
         "2) Współwłaścicielstwo" << endl <<
         "3) Firma" << endl;
    string tmp;
    cin >> tmp;

    if (tmp == "1") {
        (*owners)[id] = new Person(id);
    } else if (tmp == "2") {
        (*owners)[id] = new Coownership(id);
    } else {
        (*owners)[id] = new Company(id);
    }

    return (*owners)[id];
}
