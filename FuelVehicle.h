//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_FUELVEHICLE_H
#define INC_3PRJ_FUELVEHICLE_H


#include "Vehicle.h"

class FuelVehicle : public Vehicle {
public:
    FuelVehicle();

    virtual map<string, string> getInfo() override;

private:
    void askFuelType();

    void askEngineDisplacement();

protected:
    string fuelType;
    int engineDisplacement;
};


#endif //INC_3PRJ_FUELVEHICLE_H
