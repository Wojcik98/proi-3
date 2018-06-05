//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_TRUCK_H
#define INC_3PRJ_TRUCK_H


#include "FuelVehicle.h"

class Truck : public FuelVehicle {
public:
    Truck();

    map<string, string> getInfo() override;

private:
    bool canTransportExplosives;

    void askExplosives();
};


#endif //INC_3PRJ_TRUCK_H
