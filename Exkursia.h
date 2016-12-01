#ifndef EXAM_H
#define EXAM_H

class Exkursia {
private:
    char *country;
    int hours;
    float price;

    friend void OutputInfo (Exkursia &section);

public:
    Exkursia ();
    Exkursia (char *c, int h, float p);
    Exkursia (Exkursia &ex);

    void Setcountry(char *c);
    char *Getcountry();
    void Sethours(int h);
    int Gethours();
    void Setprice(float p);
    float Getprice();

    ~Exkursia ();
};

#endif