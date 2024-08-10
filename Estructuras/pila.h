#ifndef PILA_H
#define PILA_H

class Pila
{
public:
    Pila();
    void add(int);
    int pop();

private:
    struct NPila
    {
        int dato;
        NPila* link;
        NPila(int value):dato(value),link(nullptr) {}
    };
    NPila* pila;
};

#endif // PILA_H
