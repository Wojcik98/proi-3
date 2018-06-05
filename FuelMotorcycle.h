//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_FUELMOTORCYCLE_H
#define INC_3PRJ_FUELMOTORCYCLE_H


#include "FuelVehicle.h"

class FuelMotorcycle : public FuelVehicle {
public:
    FuelMotorcycle();
    map<string, string> getInfo() override;

private:
    bool hasTrailer;

    void askTrailer();
};


#endif //INC_3PRJ_FUELMOTORCYCLE_H
