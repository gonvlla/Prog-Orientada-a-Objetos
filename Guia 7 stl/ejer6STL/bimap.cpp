#include "bimap.h"

template<class T, class U>
Bimap<T,U>::Bimap() {}

template<class T, class U>
U Bimap<T, U>::getValue(T  key)
{
    auto j = this->fmap.find(key);
    if(j != this->fmap.end())
        return j->second;

}

template<class T, class U>
T Bimap<T, U>::getKey(U value)
{
    auto k = this->smap.find(value);
    if(k != this->smap.end())
        return k->second;

}

template<class T, class U>
void Bimap<T, U>::add(T key, U value)
{
    int b = 0;
    bool band = true;
    if(this->fmap.find(key) != this->fmap.end())
        b = 1;
    if(this->smap.find(value) != this->smap.end())
        band = false;
    if(b == 0 && band)
    {
        this->fmap[key] = value;
        this->smap[value] = key;
    }
}


