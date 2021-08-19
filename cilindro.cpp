/*
* Programacion Orientada a Objetos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 15-04-2021
* Cilindro
*/
#include "cilindro.h"

Cilindro::Cilindro()
{
this->altura=0;
this->base=0;
}

Cilindro::Cilindro(float altura, float radio)
{
this->altura=altura;
this->base=radio;
}

void Cilindro::volumen()
{
    float volumen;
    volumen=this->altura*base.area();
    cout<<"Volumen:"<<volumen<<endl;
}
