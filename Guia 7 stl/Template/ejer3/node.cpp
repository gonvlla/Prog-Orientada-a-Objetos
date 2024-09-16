#include "node.h"
#include <iostream>

template<class T>
Node<T>::Node(T nro)
{
    this->dato = nro;
    this->link = nullptr;
    this->sizeNodos++;
}

template<class T>
void Node<T>::addNode(T nro)
{
    //Si no esta vacio creo un nuevo nodo
    Node* nuevo_nodo = new Node(nro); //Reservo memoria para este dato
    nuevo_nodo->link = this; //El nuevo nodo apunta al anteriro
    this = nuevo_nodo; //Pasa a ser el actual
    this->sizeNodos++;
}

template<class T>
void Node<T>::printNode()
{
    Node* aux = this;
    T dato = aux->dato;
    this = aux->link;
    std::cout << dato;
    delete aux;
}

