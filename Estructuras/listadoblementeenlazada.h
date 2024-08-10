#ifndef LISTADOBLEMENTEENLAZADA_H
#define LISTADOBLEMENTEENLAZADA_H
#include <iostream>
class ListaDoblementeEnlazada
{
public:
    ListaDoblementeEnlazada();
    void add(int);
    void preAdd(int);
    void printList();
    void prePrintList();

private:
    struct ListaDE {
        int dato;
        ListaDE* sig;
        ListaDE* ant;
        ListaDE(int value) : dato(value), sig(nullptr), ant(nullptr) {} // inicializo el struct
    };
    ListaDE* head;
    ListaDE* tail;

};

#endif // LISTADOBLEMENTEENLAZADA_H
