#ifndef VECTORDINAMICO_H
#define VECTORDINAMICO_H


class VectorDinamico
{
public:
    VectorDinamico(int*,int); //Recibe dimension
    VectorDinamico(int*); //No recibe dimension, terminar el size
    VectorDinamico agregarElemento(int);
    VectorDinamico removerElemento(int);

    int calcularPromedio();
    int calcularMaximo();
    int calcularMinimo();

    int getTamanioVec() const;
    int *getVec() const;
    void setVec(int *);
    int getMaximoElemento() const;
    int getMinimoElemento() const;
    int getPromedioVector() const;

private:
    int *vec;
    int tamanioVec = 0;
    int maximoElemento = 0;
    int minimoElemento = 9999;
    int promedioVector = 0;
};

#endif // VECTORDINAMICO_H
