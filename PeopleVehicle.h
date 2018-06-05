//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_PEOPLEVEHICLE_H
#define INC_3PRJ_PEOPLEVEHICLE_H


#include "Vehicle.h"

class PeopleVehicle : public Vehicle {
public:
    PeopleVehicle();

    virtual map<string, string> getInfo() override;

private:
    void askPeopleEndurance();

protected:
    int peopleEndurance;
};


#endif //INC_3PRJ_PEOPLEVEHICLE_H
