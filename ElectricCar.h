//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_ELECTRICCAR_H
#define INC_3PRJ_ELECTRICCAR_H


#include "ElectricVehicle.h"

class ElectricCar : public ElectricVehicle {
public:
    ElectricCar();
    map<string, string> getInfo() override;

protected:
    bool autopilot;

private:
    void askAutopilot();
};


#endif //INC_3PRJ_ELECTRICCAR_H
