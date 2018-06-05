//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_AGRICULTURAL_H
#define INC_3PRJ_AGRICULTURAL_H


#include "FuelVehicle.h"

class Agricultural : public FuelVehicle {
public:
    Agricultural();
    void askExternMachines();

    map<string, string> getInfo() override;

private:
    bool canPowerExtMachines;
};


#endif //INC_3PRJ_AGRICULTURAL_H
