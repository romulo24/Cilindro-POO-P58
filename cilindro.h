/*
* Programacion Orientada a Objetos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 15-04-2021
* Cilindro
*/
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
