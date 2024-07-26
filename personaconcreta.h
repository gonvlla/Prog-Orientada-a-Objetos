#ifndef PERSONACONCRETA_H
#define PERSONACONCRETA_H
#include "persona.h"

class PersonaConcreta: public Persona
{
public:
    PersonaConcreta(std::string,std::string,std::string,std::string,std::string,std::string);
    int calcularPuntos();
};

#endif // PERSONACONCRETA_H
