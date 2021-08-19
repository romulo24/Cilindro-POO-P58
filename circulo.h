#ifndef CIRCULO_H
#define CIRCULO_H

#include<iostream>
using namespace std;
class Circulo
{
private:
    float radio;

public:
    Circulo(float radio);
    Circulo();
    float getRadio() const;
    void setRadio(float value);
    float area();
};

#endif // CIRCULO_H
