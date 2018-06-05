//
// Created by Wojcik98 on 30.05.18.
//

#ifndef INC_3PRJ_COOWNERSHIP_H
#define INC_3PRJ_COOWNERSHIP_H


#include "Owner.h"

class Coownership : public Owner {
public:
    explicit Coownership(string id);

private:
    string name1, name2;

    void askNames();
};


#endif //INC_3PRJ_COOWNERSHIP_H
