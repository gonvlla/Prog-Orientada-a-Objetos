#include "pila.h"

Pila::Pila()
{
    this->pila = nullptr;
}

void Pila::add(int dato)
{
    NPila* nuevo_nodo = new NPila(dato);
    nuevo_nodo->link = this->pila;
    this->pila = nuevo_nodo;
}

int Pila::pop()
{
    int dato = this->pila->dato;
    NPila* aux = this->pila;
    this->pila = this->pila->link;
    delete aux;
    return dato;
}
