#ifndef ALDEANO_H
#define ALDEANO_H
#include "persona.h"
#include <string>

class Aldeano: public Persona
{
public:
    Aldeano(string,string,string,string,string,string,string,string,string, string, string,string);//Antecedentes y requizaz

    int calcularPuntos();
};

#endif // ALDEANO_H
