#include <iostream>
#include "stack.h"
#include "node.cpp"
using namespace std;

int main()
{
    Node miNodo<int>(10);
    miNodo.addNode(11);

    Stack miPila;
    miPila.addNodeToStack(miNodo);
    return 0;
}
