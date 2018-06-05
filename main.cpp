#include <iostream>
#include <set>
#include "Database.h"
#include "Painter.h"

using namespace std;

int main() {
    bool exit = false;
    Painter::Option option;
    Database data;
    map<string, Owner *> owners;
    Painter painter;

    painter.setModel(&data);
    painter.setOwners(&owners);

    while (!exit) {
        painter.showMenu();
        option = painter.getOption();
        if (option == painter.add) {
            painter.addVehicle();
        } else if (option == painter.show) {
            painter.showVehicles();
        } else if (option == painter.change) {
            painter.changeOwner();
        } else if (option == painter.oc) {
            painter.setOC();
        } else if (option == painter.vehicle) {
            painter.showVehicle();
        } else if (option == painter.owner) {
            painter.showOwner();
        } else if (option == painter.exit) {
            exit = true;
        }
    }

    for(auto tmp : owners){
        delete tmp.second;
    }

    return 0;
}