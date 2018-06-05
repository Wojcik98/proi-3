//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_MILITARY_H
#define INC_3PRJ_MILITARY_H


#include "FuelVehicle.h"

class Military : public FuelVehicle {
public:
    Military();
    map<string, string> getInfo() override;

private:
    string weaponry;

    void askWeaponry();
};


#endif //INC_3PRJ_MILITARY_H
