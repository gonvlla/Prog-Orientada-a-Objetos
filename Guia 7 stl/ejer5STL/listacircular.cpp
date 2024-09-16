#include "listacircular.h"

template <class T>
ListaCircular<T>::ListaCircular() {}

template<class T>
void ListaCircular<T>::add(T nro)
{
    this->v.push_back(nro);
}

template<class T>
T ListaCircular<T>::get(int i)
{
    while(i >= this->v.size())
    {
        i = i - this->v.size();
    }

    return this->v[i];

}
