#ifndef CILINDRO_H
#define CILINDRO_H
#include"circulo.h"

class Cilindro
{
private:
    //Atibutos 
    float altura;
    Circulo base;

public:
    //Constructor 
    Cilindro();
    Cilindro(float altura,float radio);
    //Metodos 
    void volumen();
};

#endif // CILINDRO_H
