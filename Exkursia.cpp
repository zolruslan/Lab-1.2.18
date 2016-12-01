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

void Exkursia::Setcountry(char *c) {
    country = c;
    cout << endl << "*Setter is work" << endl;
}

char *Exkursia::Getcountry() {
    return country;
}

void Exkursia::Sethours(int h) {
    hours = h;
    cout << endl << "*Setter is work" << endl;
}

int Exkursia::Gethours() {
    return hours;
}

void Exkursia::Setprice(float p) {
    price = p;
    cout << endl << "*Setter is work" << endl;
}

float Exkursia::Getprice() {
    return price;
}