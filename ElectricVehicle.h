//
// Created by Wojcik98 on 29.05.18.
//

#ifndef INC_3PRJ_ELECTRICALVEHICLE_H
#define INC_3PRJ_ELECTRICALVEHICLE_H


#include "Vehicle.h"

class ElectricVehicle : public Vehicle {
public:
    ElectricVehicle();
    virtual map<string, string> getInfo() override;

protected:
    int batteryCapacity;

private:
    void askBattery();
};


#endif //INC_3PRJ_ELECTRICALVEHICLE_H
