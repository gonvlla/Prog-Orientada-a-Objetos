#include "listasimplementeenlazada.h"

ListaSimplementeEnlazada::ListaSimplementeEnlazada()
{
    this->head = nullptr;
}

void ListaSimplementeEnlazada::add(int dato)
{
    ListaSE* nuevo_nodo = new ListaSE(dato);
    if(this->head == nullptr)
        this->head = nuevo_nodo;
    else{
        ListaSE* aux = this->head;
        while(aux->link != nullptr)
        {
            aux = aux->link;
        }
        aux->link = nuevo_nodo;
    }
}

void ListaSimplementeEnlazada::printList()
{
    ListaSE* current = this->head;
    while(current != nullptr)
    {
        std::cout << current->dato << " ";
        current = current->link;
    }
}
