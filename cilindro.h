#ifndef CILINDRO_H
#define CILINDRO_H
#include"circulo.h"

class Cilindro
{
private:
    
    float altura;
    Circulo base;

public:
    
    Cilindro();
    Cilindro(float altura,float radio);
    void volumen();
};

#endif // CILINDRO_H
