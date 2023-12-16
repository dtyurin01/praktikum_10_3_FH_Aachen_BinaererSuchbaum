//
// Created by dtyur on 16.12.2023.
//
#include "BaumKnoten.h"
#include <iostream>
using namespace std;

void BaumKnoten::ausgeben(unsigned int tiefe){

    if (rechts != nullptr) {
        rechts->ausgeben(tiefe + 1);
    }

    for (unsigned int i = 0; i < tiefe; ++i) {
        cout << "++";
    }

   cout << data << endl;

    if (links != nullptr) {
        links->ausgeben(tiefe + 1);
    }
}
