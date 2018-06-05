//
// Created by Wojcik98 on 30.05.18.
//

#ifndef INC_3PRJ_COMPANY_H
#define INC_3PRJ_COMPANY_H


#include <map>
#include "Owner.h"

class Company : public Owner {
public:
    Company(string id);

private:
    string name;

    void askName();
};


#endif //INC_3PRJ_COMPANY_H
