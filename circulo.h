#ifndef CIRCULO_H
#define CIRCULO_H

#include<iostream>
using namespace std;
class Circulo
{
private:
    //Atributos
    float radio;

public:
    //Constructor 
    Circulo(float radio);
    Circulo();
    //Encapsulamiento
    float getRadio() const;
    void setRadio(float value);
    //Metodos 
    float area();
};

#endif // CIRCULO_H
