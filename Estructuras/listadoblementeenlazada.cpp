#include "listadoblementeenlazada.h"

ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    this->head = nullptr;
    this->tail = nullptr;
}

void ListaDoblementeEnlazada::add(int dato)
{
    ListaDE* nuevo_nodo = new ListaDE(dato);
    if(this->head == nullptr)
        this->head = this->tail = nuevo_nodo;
    else{
        this->tail->sig = nuevo_nodo;
        nuevo_nodo->ant = this->tail;
        this->tail = nuevo_nodo;
    }
}

void ListaDoblementeEnlazada::preAdd(int dato)
{
    ListaDE* nuevo_nodo = new ListaDE(dato);
    if(this->tail == nullptr)
        this->head = this->tail = nuevo_nodo;
    else{
        nuevo_nodo->sig = this->head;
        this->head->ant = nuevo_nodo;
        this->head = nuevo_nodo;
    }

}

void ListaDoblementeEnlazada::printList()
{
    ListaDE* current = this->head;
    while(current != nullptr)
    {
        std::cout << current->dato << " ";
        current = current->sig;
    }
}

void ListaDoblementeEnlazada::prePrintList()
{
    ListaDE* current = this->tail;
    while(current != nullptr)
    {
        std::cout << current->dato << " ";
        current = current->ant;
    }
}
