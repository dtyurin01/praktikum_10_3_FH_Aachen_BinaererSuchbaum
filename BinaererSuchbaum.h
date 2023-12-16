//
// Created by dtyur on 16.12.2023.
//

#ifndef PRAKTIKUM_10_3_FH_AACHEN_BINAERERSUCHBAUM_BINAERERSUCHBAUM_H
#define PRAKTIKUM_10_3_FH_AACHEN_BINAERERSUCHBAUM_BINAERERSUCHBAUM_H
#include "BaumKnoten.h"


class BinaererSuchbaum{
private:
    BaumKnoten* root;
public:
    BinaererSuchbaum(): root(nullptr){}

    // Getter für root
    BaumKnoten* get_root() const {return root;}

    void einfuegen(int val);
    void ausgeben() const;

};





#endif //PRAKTIKUM_10_3_FH_AACHEN_BINAERERSUCHBAUM_BINAERERSUCHBAUM_H
