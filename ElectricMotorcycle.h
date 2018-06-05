//
// Created by Wojcik98 on 30.05.18.
//

#ifndef INC_3PRJ_ELECTRICMOTORCYCLE_H
#define INC_3PRJ_ELECTRICMOTORCYCLE_H


#include "ElectricVehicle.h"

class ElectricMotorcycle : public ElectricVehicle {
public:
    ElectricMotorcycle();

    void askFastCharge();

    map<string, string> getInfo() override;

private:
    bool hasFastCharge;
};


#endif //INC_3PRJ_ELECTRICMOTORCYCLE_H
