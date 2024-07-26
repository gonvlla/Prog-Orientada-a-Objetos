#include "personaconcreta.h"

PersonaConcreta::PersonaConcreta(std::string nac,std::string fec,std::string tipo,
                                 std::string dur,std::string ev
                                 ,std::string ec):Persona(nac,fec,tipo,dur,ev,ec){}

int PersonaConcreta::calcularPuntos()
{
    return 0;
}
