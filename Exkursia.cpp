#include <iostream>
#include "Exkursia.h"

using namespace std;

Exkursia::Exkursia(void)
    : country("none"), hours(0), price(0) {
    cout << endl << "*constructor is work" << endl << endl;
}

Exkursia::Exkursia(char *c, int h, float p)
    : country(c), hours(h), price(p) {
    cout << endl << "*constructor with parameters is work" << endl << endl;
}

Exkursia::Exkursia(Exkursia &ex)
    : country(ex.country), hours(ex.hours), price(ex.price) {
    cout << endl << "*constructor copy is work" << endl << endl;
}

Exkursia::~Exkursia(void) {
    cout << endl << "*constructor was deleted" << endl << endl;
}