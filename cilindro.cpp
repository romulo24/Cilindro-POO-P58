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
