#include <iostream>
#include "listadoblementeenlazada.h"
#include "listasimplementeenlazada.h"
#include "pila.h"

using namespace std;

int main()
{
    int aux;
    ListaDoblementeEnlazada listaDE;
    ListaSimplementeEnlazada listaSE;
    Pila pila;
    pila.add(10);
    pila.add(22);
    cout << pila.pop();
    listaSE.add(10);
    listaSE.add(28);
    listaSE.printList();
    cout << endl;
    listaDE.add(10);
    listaDE.add(14);
    listaDE.add(0);
    listaDE.add(9);
    listaDE.prePrintList();
    return 0;
}
