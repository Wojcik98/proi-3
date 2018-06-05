//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_FUELCAR_H
#define INC_3PRJ_FUELCAR_H


#include "FuelVehicle.h"

class FuelCar : public FuelVehicle {
public:
    FuelCar();

    map<string, string> getInfo() override;

private:
    void askAC();

    bool hasAC;
};


#endif //INC_3PRJ_FUELCAR_H
