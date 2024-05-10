#include "fracciones.h"
#include <iostream>

Fracciones::Fracciones(int numerador)
{
    this->numerador = numerador;
}

Fracciones::Fracciones(int numerador,int denominador)
{
    this->numerador = numerador;
    this->denominador = denominador;
}

void Fracciones::sumaFraccion(Fracciones otraFraccion)
{
    int nuevoNumerador;
    int nuevoDenominador;
    if(this->denominador == otraFraccion.denominador) //Si tienen el mismo denominador
    {
        nuevoNumerador = (this->numerador) + (otraFraccion.numerador);
        this->setNumerador(nuevoNumerador);
    }else if(this->denominador != otraFraccion.denominador)
    {
        nuevoNumerador = (this->denominador * otraFraccion.numerador) + (otraFraccion.denominador * this->numerador);
        nuevoDenominador = this->denominador * otraFraccion.denominador;
        this->setNumerador(nuevoNumerador);
        this->setDenominador(nuevoDenominador);
    }
}

void Fracciones::restaFraccion(Fracciones otraFraccion)
{
    int nuevoNumerador;
    int nuevoDenominador;

    if(this->denominador == otraFraccion.denominador) //Si tienen el mismo denominador
    {
        nuevoNumerador = (this->numerador) - (otraFraccion.numerador);
        this->setNumerador(nuevoNumerador);
    }else if(this->denominador != otraFraccion.denominador)
    {
        nuevoNumerador = (this->denominador * otraFraccion.numerador) - (otraFraccion.denominador * this->numerador);
        nuevoDenominador = this->denominador * otraFraccion.denominador;
        this->setNumerador(nuevoNumerador);
        this->setDenominador(nuevoDenominador);
        //return Fracciones(nuevoNumerador,nuevoDenominador);

    }
}

void Fracciones::simplificaFraccion() ///Ya conoce su num,den
{
    int mcd = this->maximoComunDivisor(this->numerador,this->denominador);
    int num = this->numerador/mcd;
    int den = this->denominador/mcd;
    this->numerador = num;
    this->denominador = den;

}

void Fracciones::multiplicarFraccion(Fracciones otraFraccion)
{
    int nuevoNumerador = this->numerador * otraFraccion.numerador;
    int nuevoDenominador = this->denominador * otraFraccion.denominador;
    this->numerador = nuevoNumerador;
    this->denominador = nuevoDenominador;
}

void Fracciones::dividirFracciones(Fracciones otraFraccion)
{
    int nuevoNumerador = this->numerador * otraFraccion.denominador;
    int nuevoDenominador = this->denominador * otraFraccion.numerador;
    this->numerador = nuevoNumerador;
    this->denominador = nuevoDenominador;
}

int Fracciones::maximoComunDivisor(int a, int b) ///a = num, b = den
{
    a = this->numerador, b = this->denominador;
    int resultado = 1;
    if(a < b){
        int aux = a;
        a = b;
        b = aux;
    }
    for(int i = 2;i <= b; i++)
    {
        if((a%i == 0) && (b%i == 0))
        {
            resultado = i;
        }
    }
    return resultado;
}




void Fracciones::setNumerador(int numerador)
{
    this->numerador = numerador;
}

void Fracciones::setDenominador(int denominador)
{
    this->denominador = denominador;
}

int Fracciones::getNumerador() const
{
    return this->numerador;
}

int Fracciones::getDenominador() const
{
    return this->denominador;
}

int Fracciones::getMcd() const
{
    return this->mcd;
}

void Fracciones::setMcd(int mcd)
{
    mcd = this->maximoComunDivisor(this->numerador,this->denominador);
}
