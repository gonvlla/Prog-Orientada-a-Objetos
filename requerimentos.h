#ifndef REQUERIMENTOS_H
#define REQUERIMENTOS_H
#define _GLIBCXX_USE_CXX11_ABI 0
#include <string>
#include <fstream>


class Requerimentos
{
public:
    Requerimentos();

    void cargarRequerimentos();

    std::string getFechaNac() const;

    std::string getEstadoVisa() const;

    std::string getDuracionEstancia() const;

    void obtenerNacionalidades();

protected:


};

#endif // REQUERIMENTOS_H
