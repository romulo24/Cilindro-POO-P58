/*
* Programacion Orientada a Objetos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 15-04-2021
* Cilindro
*/

#include <iostream>
#include "circulo.h"
#include "cilindro.h"
int valor();
using namespace std;

int main()
{
    char op;
    cout<<"= = = VOLUMEN DE UN CILINDRO = = ="<<endl;
    cout<<endl;
    valor();

    do{
        cout<<endl;
        cout<<"Desea continuar (S/n):"<<endl;
        cin>>op;
        switch (op){
        case 'S':
            valor();
            break;
        case 's':
            valor();
            break;
        default:
            cout << "Gracias por utilizar este programa!"<<endl;
            cout<<endl;
            break;
        }
    }while(op=='S' or op=='s' );
}


int valor(){
    int radio,altura;
    do{
        cout<<"Ingrese el radio y la altura:";
        cin>>radio>>altura;
        if(radio<0){
            cout<<"ERROR: El valor del radio es incorrecto!"<<endl;
        }
        if(altura<0){
            cout<<"ERROR: El valor de la altura es incorrecto!"<<endl;
        }
    }
    while (radio<0||altura<0);
    Cilindro *cilindro=new Cilindro(altura,radio);
    cilindro->volumen();
    return 0;
}
