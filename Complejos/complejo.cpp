#include "complejo.h"
//#include <iostream>
//#include <cmath>

//using namespace std;

Complejo::Complejo(int parteReal,int parteImaginaria)
{
    this->parteReal = parteReal;
    this->parteImaginaria = parteImaginaria;
}

Complejo Complejo::sumaComplejos(Complejo otroComplejo)
{
    int nuevaPR,nuevaPI;

    nuevaPR = this->parteReal + otroComplejo.parteReal;
    nuevaPI = this->parteImaginaria + otroComplejo.parteImaginaria;
    return Complejo(nuevaPR,nuevaPI);


}

Complejo Complejo::restaComplejos(Complejo otroComplejo)
{
    int nuevaPR,nuevaPI;

    nuevaPR = this->parteReal - otroComplejo.parteReal;
    nuevaPI = this->parteImaginaria - otroComplejo.parteImaginaria;
    return Complejo(nuevaPR,nuevaPI);
}

Complejo Complejo::multiplicacionComplejo(Complejo otroComplejo)
{
    int nuevaReal;
    int nuevaImaginaria;
    nuevaReal = ((this->parteReal * otroComplejo.parteReal) + ((this->parteImaginaria*otroComplejo.parteImaginaria)*(-1)));
    nuevaImaginaria = ((this->parteReal*otroComplejo.parteImaginaria)+(this->parteImaginaria*otroComplejo.parteReal));
    return Complejo(nuevaReal,nuevaImaginaria);
}

/*void Complejo::dividirComplejo(Complejo otroComplejo)
{
    int nuevaReal; //Numerador
    int nuevaImaginaria; //Numerador
    int divisorComplejoReal;
    int divisorComplejoIm;
    if(otroComplejo.parteImaginaria<0) //Si la imaginaria es negativa
    {
        nuevaReal = ((this->parteReal * otroComplejo.parteReal) + (this->parteImaginaria * otroComplejo.parteImaginaria)*(-1)); //El numerador del nuevo complejo
        nuevaImaginaria = ((this->parteReal * otroComplejo.parteImaginaria) + (this->parteImaginaria * otroComplejo.parteReal));
        cout << nuevoReal << " + " << nuevaImaginaria << "i" << endl;
        cout << "--------" << endl;
        divisorComplejoReal = pow(otroComplejo.parteReal,2);
        divisorComplejoIm = pow(otroComplejo.parteImaginaria,2);
        cout << divisorComplejoReal << " + " << divisorComplejoIm << "i"

    }
}*/



float Complejo::getParteReal() const
{
    return parteReal;
}

float Complejo::getParteImaginaria() const
{
    return parteImaginaria;
}

void Complejo::setParteReal(int parteReal)
{
    this->parteReal = parteReal;
}

void Complejo::setParteImaginaria(int parteImaginaria)
{
    this->parteImaginaria = parteImaginaria;
}
