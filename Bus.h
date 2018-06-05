//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_BUS_H
#define INC_3PRJ_BUS_H


#include "FuelVehicle.h"

class Bus : public FuelVehicle {
public:
    Bus();
    map<string, string> getInfo() override;

private:
    int standingNo, sittingNo;

    void askPeopleCapacity();
};


#endif //INC_3PRJ_BUS_H
