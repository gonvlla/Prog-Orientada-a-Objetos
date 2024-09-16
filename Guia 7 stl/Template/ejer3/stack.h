#ifndef STACK_H
#define STACK_H
#include "node.cpp"

class Stack
{
public:
    Stack();
    void addNodeToStack(Node);
private:
    Node *nodos = nullptr;
    int cantNodes = 0;
};

#endif // STACK_H
