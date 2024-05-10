#include <iostream>
#include "vectordinamico.h"

using namespace std;

int main()
{
    int* vec = new int [10];
    int i,elemento;
    for(i = 0; i < 10; i++) vec[i] = i;
    VectorDinamico vector(vec,i);

    cout << "Punto a - Cant elementos: " << vector.getTamanioVec() << endl;

    cout << "Punto b - Agregar un elemento: ";

    cin >> elemento; vector.agregarElemento(elemento);

    cout << "Punto c - Remover un elemento: "; //Si existe el elemento lo elminia retornando un nuevo vector, sino retorna el mismvo vector

    cin >> elemento;

    vector.removerElemento(elemento);

    cout << "Punto d - Calcular promedio de los elementos: " << vector.calcularPromedio() << endl;

    cout << "Punto e - Minimo elemento: " << vector.calcularMinimo() << endl;

    cout << "Punto f - Maximo Elemento: " << vector.calcularMaximo() << endl;

    int* auxVec = vector.getVec();
    int nuevaDim = vector.getTamanioVec();
    for(int i = 0; i < nuevaDim; i++) cout << auxVec[i] << " ";
    //delete[]vec;
    //delete[]auxVec;

    return 0;
}
