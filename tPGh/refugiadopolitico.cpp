#include "refugiadopolitico.h"

RefugiadoPolitico::RefugiadoPolitico(string nac, string fec, string tv, string de, string ec, string ev, string pr,string pv,string vs, string vp,string ant,string req)
    :Persona(nac,fec,tv,de,ec,ev,pr,pv,vs,vp,ant,req){}

int RefugiadoPolitico::calcularPuntos()
{
    return 15;
}
