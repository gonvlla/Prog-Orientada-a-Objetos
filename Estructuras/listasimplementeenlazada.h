#ifndef LISTASIMPLEMENTEENLAZADA_H
#define LISTASIMPLEMENTEENLAZADA_H
#include <iostream>

class ListaSimplementeEnlazada
{
public:
    ListaSimplementeEnlazada();
    void add(int);
    void printList();
private:
    struct ListaSE{
        int dato;
        ListaSE* link;
        ListaSE(int value) : dato(value),link(nullptr){}
    };
    ListaSE* head;
};

#endif // LISTASIMPLEMENTEENLAZADA_H
