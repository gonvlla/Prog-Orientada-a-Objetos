#ifndef NODE_H
#define NODE_H

template <class T>
class Node
{
public:
    Node(T);
    void addNode(T);
    void printNode();
    int getSizeNodos() const;

private:
    T dato = 0; //Almacena datos genericos T
    Node* link; //Guardara referencia del siguiente nodo
    int sizeNodos = 0;
};

#endif // NODE_H
