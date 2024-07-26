#include "Contenedora.h"
#include <ctime>
#include <cstddef>
#include <cstdlib>

Contenedora::Contenedora()
{

}


Contenedora::~Contenedora()
{
   delete []this->personas;
}

void Contenedora::borrarDatos()
{
    delete []this->personas;
    this->personas = NULL;
    this->tamanioContenedor = 0;
}


void Contenedora::insertarPersona(string buffer[])
{
    srand(time(NULL));
    Persona** aux = new Persona*[this->tamanioContenedor + 1];
    Persona* aux2;

    int semilla = rand() % 4;
    switch (semilla){ //Creo persona con todos los atributos de todos los niveles, muestro en dialog dependiendo el nivel
    case 0:
        aux2 = new Aldeano(buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5],buffer[6],buffer[7],buffer[8],buffer[9],buffer[10],buffer[11]);
        break;
    case 1:
        aux2 = new Diplomatico(buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5],buffer[6],buffer[7],buffer[8],buffer[9],buffer[10],buffer[11]);
        break;
    case 2:
        aux2 = new RefugiadoPolitico(buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5],buffer[6],buffer[7],buffer[8],buffer[9],buffer[10],buffer[11]);
        break;
    case 3:
        aux2 = new Revolucionario(buffer[0],buffer[1],buffer[2],buffer[3],buffer[4],buffer[5],buffer[6],buffer[7],buffer[8],buffer[9],buffer[10],buffer[11]);
        break;
    }

    if(this->personas != nullptr)
    {
        for(int i = 0; i < this->tamanioContenedor; i++)
        {
            aux[i] = this->personas[i];
        }
    }

    //Carga a el vector
    aux[this->tamanioContenedor] = aux2;
    delete[] this->personas;
    this->personas = aux;
    this->tamanioContenedor++;
}

Persona *Contenedora::sacarPersona(int nro)
{
    return this->personas[nro];
}



int Contenedora::getTamanioContenedor() const
{
    return this->tamanioContenedor;
}




