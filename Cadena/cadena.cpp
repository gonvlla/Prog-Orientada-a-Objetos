#include "cadena.h"
#include <ctype.h>
#include <cstring>


Cadena::Cadena(char *cadena)
{
    this->cadena = cadena;
    while(this->cadena[this->contCadena] != '\0') this->contCadena++;

}


Cadena Cadena::toUpper(char *cadena)
{
    char* newCadena = new char[this->contCadena];
    for(int i = 0; i < this->contCadena;i++) newCadena[i] = toupper(cadena[i]);
    newCadena[this->contCadena] = '\0';
    //delete[]cadena;
    this->cadena = newCadena;
}


void Cadena::setContCadena(int contCadena)
{
    this->contCadena = contCadena;
}

Cadena Cadena::agregarAlPrincipio(char caracter)
{
    char* newCadena = new char [this->contCadena+1];
    int j = 0;
    newCadena[0] = caracter;
    for(int i = 1; i <= this->contCadena; i++)
    {
        newCadena[i] = this->cadena[j];
        j++;
    }

    newCadena[this->contCadena+1] = '\0';
    this->cadena = newCadena;
}

Cadena Cadena::agregarAlFinal(char caracter)
{
    char* newCadena = new char[this->contCadena + 1];
    for(int i = 0; i < this->contCadena; i++) newCadena[i] = this->cadena[i];
    newCadena[this->contCadena] = caracter;
    newCadena[this->contCadena+1] = '\0';
    this->cadena = newCadena;
}

Cadena Cadena::removerOcurrencia(char caracter)
{
    //Determinar si existe el caracter para crear una nueva cadena-1
    int posOcurrencia = -1;
    bool existe = false;
    for(int i = 0; i < this->contCadena; i++)
    {
        if(this->cadena[i] == caracter) posOcurrencia = i;existe = true;break;
    }

    char *nuevaCadena;
    if(existe) nuevaCadena = new char[this->contCadena - 1];
    //else return this;

    int j = 0; // Índice para la nueva cadena
    for (int i = 0; i < this->contCadena; i++) {
        if (i != posOcurrencia) {
            nuevaCadena[j++] = this->cadena[i];
        }
    }

    this->cadena = nuevaCadena;
}

int Cadena::getContCadena() const
{
    return this->contCadena-1;
}

char *Cadena::getCadena()
{
    return this->cadena;
}



