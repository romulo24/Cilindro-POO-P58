#include "circulo.h"

float Circulo::getRadio() const
{
    return this->radio;
}

void Circulo::setRadio(float value)
{
    this->radio = value;
}

float Circulo::area()
{
    float area;
    float const PI=3.1415;
    area=this->radio*this->radio*PI;
    return area;
    cout<<"El area es:"<<area<<endl;
}

Circulo::Circulo(float radio)
{
    this->radio=radio;
}

Circulo::Circulo()
{
    this->radio=0;
}
