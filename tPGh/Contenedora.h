#ifndef CONTENEDORA_H
#define CONTENEDORA_H
#define _GLIBCXX_USE_CXX11_ABI 0

#include "persona.h"
#include "aldeano.h"
#include "diplomatico.h"
#include "refugiadopolitico.h"
#include "revolucionario.h"
#include <ctime>
#include <cstdlib>
#include <string>
//#include "nivel.h"



class Contenedora
{
public:
    Contenedora();

    ~Contenedora();

    void borrarDatos();

    void insertarPersona(string[]); //Carga la referencia a la persona

    Persona *sacarPersona(int); //Retorna la ultima persona agregada

    int getTamanioContenedor() const;

private:

    Persona** personas = nullptr; //Referencia a las personas

    int tamanioContenedor = 0; //Tamanio del contenedor

    int nivAct = 1;


};

#endif // CONTENEDORA_H
