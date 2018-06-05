//
// Created by Wojcik98 on 30.05.18.
//

#ifndef INC_3PRJ_PERSON_H
#define INC_3PRJ_PERSON_H


#include <string>
#include "Owner.h"

using namespace std;

class Person : public Owner {
public:
    explicit Person(string id);

private:
    string name;

    void askName();
};


#endif //INC_3PRJ_PERSON_H
