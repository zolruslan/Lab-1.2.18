#ifndef EXAM_H
#define EXAM_H

class Exkursia {
private:
    char *country;
    int hours;
    float price;
public:
    Exkursia ();
    Exkursia (char *c, int h, float p);
    Exkursia (Exkursia &ex);

    ~Exkursia ();
};

#endif