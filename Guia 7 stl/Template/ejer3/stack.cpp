#include "stack.h"

Stack::Stack() {}

void Stack::addNodeToStack(Node actual)
{
    Node* newNodes = new Node[this->cantNodes + 1];


    if(this->nodos != nullptr) //Si ya tengo nodos los copio y agrego al final
    {
        for(int i = 0; i < this->cantNodes; i++)
        {
            newNodes[i] = this->nodos[i];
        }
    }
    newNodes[this->cantNodes] = actual;
    delete[] this->nodos;
    this->nodos = newNodes;

}


