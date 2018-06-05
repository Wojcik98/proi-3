//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_LIGHTGV_H
#define INC_3PRJ_LIGHTGV_H


#include "PeopleVehicle.h"

class Litter : public PeopleVehicle {
public:
    Litter();

    map<string, string> getInfo() override;

private:
    int peopleNo;
    void askPeopleNo();
};


#endif //INC_3PRJ_LIGHTGV_H
