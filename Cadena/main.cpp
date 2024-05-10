#include <iostream>
#include <ctype.h>
#include "cadena.h"
#include <string>

using namespace std;

int main()
{
    Cadena cadena1("hello world");
    Cadena cadena2("hello world");
    ///Para punto a
    cout << "Tamanio cadena: " << cadena1.getContCadena() << endl;
    ///Para punto b
    cadena1.agregarAlFinal('!');
    cout << "Agregando caracter al final: " << cadena1.getCadena() << endl;

    cadena2.agregarAlPrincipio('$');
    cout << "Agregando caracter al principio: " << cadena2.getCadena() << endl;

    cadena2.toUpper("hello world");
    cout << "Pasada a mayusuclas: " << cadena2.getCadena() << endl;

    cadena2.removerOcurrencia('l');
    cout << "Ocurrencia eliminada: " << cadena1.getCadena() << endl;
    return 0;
}
