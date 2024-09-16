#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H

template <class T>

class VectorDinamico
{
public:
    VectorDinamico(T*);
    void add(T);
    void deleteConcurrencys(T);

private:
    T* miVector;
    int size = 0;
};

#endif // VECTORDINAMICO_H
