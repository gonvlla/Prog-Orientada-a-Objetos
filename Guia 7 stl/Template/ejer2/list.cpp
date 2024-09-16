#include "list.h"
#include <iostream>




template<class T>
List<T>::List()
{
    this->head = nullptr;
}

template<class T>
void List<T>::add(T nro)
{
    lista* nuevo_nodo = new lista(nro);
    if(this->head == nullptr)
        this->head = nuevo_nodo;
    else{
        lista* aux = this->head;
        while(aux->link != nullptr) aux = aux->link;
        aux->link = nuevo_nodo;
    }
}

template<class T>
void List<T>::printList()
{
    lista* current = this->head;
    while(current != nullptr)
    {
        std::cout << current->dato << " ";
        current = current->link;
    }
}

template<class T>
void List<T>::removeAll()
{

    while(this->head != nullptr)
    {
        lista* aux = this->head;
        delete aux;
        this->head = this->head->link;

    }
}
