#include "nivel.h"

Nivel::Nivel(){}

//Cuando juego me de error necesito hacer una forward declaration

void Nivel::detectarNivelActual(int puntos)
{
    if(puntos >= 100)
    {
        this->nivelActual = 2;
    }
    if(puntos >= 150)
    {
        this->nivelActual = 3;
    }
    if(puntos >= 200)
    {
        this->nivelActual = 4;
    }
    if(puntos >= 250)
    {
        this->nivelActual = 5;
    }
}

int Nivel::getNivelActual()
{
    return this->nivelActual;
}
