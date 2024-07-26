#ifndef TIPO_H
#define TIPO_H
#define _GLIBCXX_USE_CXX11_ABI 0
#include <string>

class Tipo
{
public:
    Tipo();
    void setTipos();
protected:
    std::string tipos[4];
};

#endif // TIPO_H
