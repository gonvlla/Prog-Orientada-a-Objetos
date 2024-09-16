#include "vectordinamico.h"

template <class T>
VectorDinamico<T>::VectorDinamico(T* miVector)
{
    this->miVector = miVector;
    this->size = sizeof(miVector) / sizeof(miVector[0]);
}



template<class T>
void VectorDinamico<T>::add(T nro)
{
    T* newVec = new T[this->size + 1];
    for(int i = 0; i < this->size; i++) newVec[i] = this->miVector[i];
    newVec[this->size] = nro;
    delete[] this->miVector;
    this->miVector = newVec;
}

template<class T>
void VectorDinamico<T>::deleteConcurrencys(T nro)
{
    //Una alternativa para todas las ocurrencias
    int j = 0; //Iterador para la cantidad de veces que se repite el nro pasado
    for(int i = 0; i < this->size; i++) if(this->miVector[i] == nro) j++;

    T* newVec = new T[this->size - j]; //Eliminara todas las ocurrencias

    int k = 0;
    for(int i = 0; i < this->size - j; i++)
    {
        if(this->miVector[i] != nro)
        {
            newVec[i] = this->miVector[k];
            k++;
        }
    }

    /* {Si fuera una sola ocurrencia
    T* vecAux = new T[this->size - 1];
    bool encontroOcurrencia = false;
    int l = 0;
    for(int i = 0; i < this->size; i++)
    {
        if(this->miVector[i] == nro && !encontroOcurrencia)
        {
            vecAux[i] = this->miVector[l];
            l++;
            encontroOcurrencia = true;
        }
        vecAux[i] = this->miVector[i];
    }
    }*/

    delete[] this->miVector;
    this->size = k;
    this->miVector = newVec;

}
