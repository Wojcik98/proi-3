//
// Created by Wojcik98 on 30.05.18.
//

#include <iostream>
#include "Person.h"

Person::Person(string id) : Owner(id) {
    askName();
}

void Person::askName() {
    cout << "Podaj imię i nazwisko właściciela: ";
    cin.ignore();
    getline(cin, name);
    displayedName = name;
}
