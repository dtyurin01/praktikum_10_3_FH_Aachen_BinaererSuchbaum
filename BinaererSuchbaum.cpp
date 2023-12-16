//
// Created by dtyur on 16.12.2023.
//

#include <iostream>
#include "BinaererSuchbaum.h"
#include "BaumKnoten.h"
using namespace std;

void BinaererSuchbaum::einfuegen(int val) {
    BaumKnoten *neuer_eintrag = new BaumKnoten(val);

    if (root == nullptr) {
        root = neuer_eintrag;
    } else {
        BaumKnoten* current = root;
        BaumKnoten* parent = nullptr;

        while (current != nullptr) {
            parent = current;
            if (val < current->get_data()) {
                current = current->get_links();
            } else if (val > current->get_data()) {
                current = current->get_rechts();
            } else {
                delete neuer_eintrag; // Der Wert ist bereits im Baum vorhanden, daher löschen wir den neuen Eintrag
                return;
            }
        }

        if (parent != nullptr) {
            if (val < parent->get_data()) {
                parent->set_links(neuer_eintrag);
            } else {
                parent->set_rechts(neuer_eintrag);
            }
        }
    }
}

void BinaererSuchbaum::ausgeben() const {
    if(root == nullptr){
        cout << "Leerer Baum." << endl;
    }else{
        root->ausgeben(0);
    }
}