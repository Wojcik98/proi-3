//
// Created by Wojcik98 on 30.05.18.
//

#ifndef INC_3PRJ_DATABASE_H
#define INC_3PRJ_DATABASE_H


#include <map>
#include <vector>
#include "Vehicle.h"

using namespace std;

class Database {
public:
    Database();

    void addVehicle(Vehicle *);

    void setOC(string vin);

    void setOwner(string vin, Owner *owner);

    vector<Vehicle *> getVehicles();

    Vehicle *getVehicle(string vin);

private:
    map<string, Vehicle *> vehicles;
};


#endif //INC_3PRJ_DATABASE_H
