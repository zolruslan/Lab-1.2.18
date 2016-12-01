#include <iostream>
#include "Exkursia.h"
#include "Out.h"

using namespace std;

void OutputInfo(Exkursia &ex) {
    cout << "Country: " << ex.Getcountry() << endl;
    cout << "Hours: " << ex.Gethours() << endl;
    cout << "Price: " << ex.Getprice() << endl;
}
