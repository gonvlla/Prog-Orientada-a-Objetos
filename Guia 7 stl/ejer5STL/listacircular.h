#ifndef LISTACIRCULAR_H
#define LISTACIRCULAR_H
#include <vector>

template <class T>

class ListaCircular
{
public:
    ListaCircular();
    void add(T);
    T get(int);  //Indice
private:
    std::vector<T>v;

};

#endif // LISTACIRCULAR_H
