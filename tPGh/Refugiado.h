#ifndef REFUGIADO_H
#define REFUGIADO_H
#include "persona.h"
#include <string>

class Refugiado: public Persona
{
public:
    Refugiado(std::string,std::string,std::string,std::string,std::string,std::string);
    int calcularPuntos();
};

#endif // REFUGIADO_H
