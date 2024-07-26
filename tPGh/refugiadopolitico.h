#ifndef REFUGIADOPOLITICO_H
#define REFUGIADOPOLITICO_H
#include "persona.h"
#include <string>

class RefugiadoPolitico: public Persona
{
public:

    RefugiadoPolitico(string,string,string,string,string,string,string,string,string, string, string,string);//Antecedentes y requizaz
    int calcularPuntos();
};

#endif // REFUGIADOPOLITICO_H
