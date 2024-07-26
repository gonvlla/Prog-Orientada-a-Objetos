#include "diplomatico.h"

Diplomatico::Diplomatico(string nac, string fec, string tv, string de, string ec, string ev, string pr,string pv,string vs, string vp,string ant,string req)
    :Persona(nac,fec,tv,de,ec,ev,pr,pv,vs,vp,ant,req){}


int Diplomatico::calcularPuntos()
{
    return 25;
}
