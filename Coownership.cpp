//
// Created by Wojcik98 on 30.05.18.
//

#include <iostream>
#include "Coownership.h"

Coownership::Coownership(string id) : Owner(id) {
    askNames();
}

void Coownership::askNames() {
    cout << "Podaj imiona i nazwiska właścicieli (w osobnych liniach): ";
    cin.ignore();
    getline(cin, name1);
    getline(cin, name2);
    displayedName = name1 + ", " + name2;
}
