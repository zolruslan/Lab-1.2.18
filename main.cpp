#include <iostream>
#include "Exkursia.h"

int main() {
    Exkursia *ex = new Exkursia ("country", 3, 522.30);
    OutputInfo(*ex);
    Exkursia *ex2 = new Exkursia(*ex);
    OutputInfo(*ex2);
    delete ex, ex2;
    ex = new Exkursia();
    OutputInfo(*ex);
    ex->Setcountry("country");
    OutputInfo(*ex);
    delete ex;
    return 0;
}
