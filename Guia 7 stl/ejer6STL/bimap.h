#ifndef BIMAP_H
#define BIMAP_H
#include <map>
#include <atomic>
#include <stdexcept>
/*Realice una clase template que modele un bimap (un mapa que permita utilizar la key para
llegar al valor o el valor para llegar a la key) utilice stl. Tenga en cuenta que tanto el valor
como la key van a tener que ser únicos.*/

template <class T, class U>

class Bimap
{
public:
    Bimap();
    U getValue(T); //Puede ser key o value
    T getKey(U);
    void add(T,U);


private:

    std::map<U,T>fmap;
    std::map<T,U>smap;

};

#endif // BIMAP_H
