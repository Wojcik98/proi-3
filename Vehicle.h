//
// Created by Wojcik98 on 29.05.18.
//

#ifndef INC_3PRJ_VEHICLE_H
#define INC_3PRJ_VEHICLE_H


#include <map>
#include <string>
#include "Owner.h"

using namespace std;

class Owner;

class Vehicle {
public:
    Vehicle();

    void askOC();

    string getVIN();

    virtual map<string, string> getInfo();

    void changeOwner(Owner *owner);

    void setOwner(Owner *owner);

private:
    Owner *owner;
    int weight;
    string color;
    string vin;
    string plate;
    int width, height, length;
    string productionDate;
    string oc;

    void askVIN();

    void askPlate();

    void askProduction();

    void askWeight();

    void askDims();

    void askColor();

protected:
    string type;
    int wheelsNo;
    int axisNo;

    void askWheels();

    void askAxis();
};


#endif //INC_3PRJ_VEHICLE_H
