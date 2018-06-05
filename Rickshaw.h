//
// Created by Wojcik98 on 31.05.18.
//

#ifndef INC_3PRJ_ANTIQUE_H
#define INC_3PRJ_ANTIQUE_H


#include "PeopleVehicle.h"

class Rickshaw : public PeopleVehicle {
public:
    Rickshaw();
    map<string, string> getInfo() override;

private:
    bool hasRoof;

    void askRoof();
};


#endif //INC_3PRJ_ANTIQUE_H
