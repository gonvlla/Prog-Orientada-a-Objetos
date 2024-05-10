#ifndef CADENA_H
#define CADENA_H
#include <ctype.h>


class Cadena
{
public:
    Cadena (char*);

    Cadena toUpper(char*);

    void setContCadena(int);

    Cadena agregarAlPrincipio(char);

    Cadena agregarAlFinal(char);

    Cadena removerOcurrencia(char);

    int getContCadena() const;

    void setCadena(char *);

    char *getCadena();

private:
    char *cadena;
    int contCadena = 0;

};

#endif // CADENA_H
