//
// Created by Wojcik98 on 30.05.18.
//

#include <iostream>
#include "Company.h"

Company::Company(string id) : Owner(id) {
    askName();
}

void Company::askName() {
    cout << "Podaj nazwę firmy: ";
    cin.ignore();
    getline(cin, name);
    displayedName = name;
}
