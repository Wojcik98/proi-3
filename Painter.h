//
// Created by Wojcik98 on 30.05.18.
//

#ifndef INC_3PRJ_PAINTER_H
#define INC_3PRJ_PAINTER_H


#include <vector>
#include <set>
#include "Vehicle.h"
#include "Database.h"

using namespace std;

class Painter {
public:
    Painter();

    enum Option {
        add, show, change, exit, invalid, oc, vehicle, owner
    };

    void setModel(Database *);

    void setOwners(map<string, Owner *> *owners);

    void showMenu();

    void showVehicles();

    Option getOption();

    void addVehicle();

    Vehicle *getNewVehicle(string);

    void changeOwner();

    void setOC();

    void showVehicle();

    void showOwner();

private:
    Database *model;
    map<string, Owner *> *owners;

    const string ADD_VEHICLE = "1";     //TODO kolejność
    const string SHOW_VEHICLES = "2";
    const string CHANGE_OWNER = "3";
    const string SET_OC = "4";
    const string SHOW_VEHICLE = "5";
    const string SHOW_OWNER = "6";
    const string EXIT = "99";

    Owner *getOwner(string id);

    Owner *addOwner(string id);
};


#endif //INC_3PRJ_PAINTER_H
