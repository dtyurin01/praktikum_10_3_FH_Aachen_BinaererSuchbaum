//
// Created by dtyur on 16.12.2023.
//

#ifndef PRAKTIKUM_10_3_FH_AACHEN_BINAERERSUCHBAUM_BAUMKNOTEN_H
#define PRAKTIKUM_10_3_FH_AACHEN_BINAERERSUCHBAUM_BAUMKNOTEN_H

class BaumKnoten{
private:
    int data;
    BaumKnoten* links;
    BaumKnoten* rechts;
public:
    BaumKnoten(int val) : data(val), links(nullptr), rechts(nullptr) {}

    int get_data() const { return data; }
    void set_data(int val) { data = val; }

    BaumKnoten* get_links() const { return links; }
    void set_links(BaumKnoten* ptr) { links = ptr; }

    BaumKnoten* get_rechts() const { return rechts; }
    void set_rechts(BaumKnoten* ptr) { rechts = ptr; }

    void ausgeben(unsigned int tiefe);

};

#endif //PRAKTIKUM_10_3_FH_AACHEN_BINAERERSUCHBAUM_BAUMKNOTEN_H
