#ifndef DIPLOMATICO_H
#define DIPLOMATICO_H
#include "persona.h"
#include <string>

class Diplomatico: public Persona
{
public:
    Diplomatico(string,string,string,string,string,string,string,string,string, string, string,string);//Antecedentes y requizaz
    int calcularPuntos();
};

#endif // DIPLOMATICO_H
