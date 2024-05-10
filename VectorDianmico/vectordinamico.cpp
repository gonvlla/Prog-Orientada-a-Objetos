#include "vectordinamico.h"


VectorDinamico::VectorDinamico(int *vec,int tamanio)
{
    this->vec = vec;
    this->tamanioVec = tamanio;

}

VectorDinamico::VectorDinamico(int *vec)
{
    this->vec = vec;
    //while(this->tamanioVec < sizeof(this->vec)) this->tamanioVec++;
}

VectorDinamico VectorDinamico::agregarElemento(int elemento)
{
    int* newVec = new int[this->tamanioVec+1]; //Para agregar un elemento
    for(int i = 0; i < this->tamanioVec; i++) //Para copiar el vector en uno nuevo
    {
        newVec[i] = this->vec[i];
    }
    newVec[this->tamanioVec] = elemento;
    this->tamanioVec++;
    return this->vec = newVec;

}

VectorDinamico VectorDinamico::removerElemento(int elemento)
{
    //Comprobar si el elemento existe
    bool existeEl = false;
    int posElemento = 0,j = 0;
    for(int i = 0; i < this->tamanioVec; i++)
    {
        if(this->vec[i] == elemento){
            existeEl = true;
            posElemento = i;
            break;
        }
    }

    int *newVec;

    if(existeEl) //Si existe, opero
    {
        newVec = new int[this->tamanioVec - 1];
        for(int i = 0; i < this->tamanioVec; i++)newVec[i] = this->vec[i];
        for(int i = 0; i < this->tamanioVec; i++)
        {
            if (i != posElemento) {
                newVec[j] = this->vec[i];
                j++;
            }
        }
        this->tamanioVec--;
        return this->vec = newVec;
    }else{ //Si no existe retorno el mismo vector
        return this->vec;//VectorDinamico(this->vec,this->tamanioVec);
    }
}

int VectorDinamico::calcularPromedio()
{
    for(int i = 0; i < this->tamanioVec; i++) this->promedioVector+= this->vec[i];
    this->promedioVector = this->promedioVector / this->tamanioVec;
    return this->promedioVector;
}



int VectorDinamico::calcularMaximo()
{
    for(int i = 0; i < this->tamanioVec; i++)
    {
        if(this->vec[i] > this->maximoElemento) this->maximoElemento = this->vec[i];
    }
    return this->maximoElemento;
}

int VectorDinamico::calcularMinimo()
{
    for(int i = 0; i < this->tamanioVec; i++)
    {
        if(this->vec[i] < this->minimoElemento) this->minimoElemento = this->vec[i];
    }
    return this->minimoElemento;
}

int VectorDinamico::getTamanioVec() const
{
    return this->tamanioVec;
}

int *VectorDinamico::getVec() const
{
    return this->vec;
}

void VectorDinamico::setVec(int *vec)
{
    this->vec = vec;
}

int VectorDinamico::getMaximoElemento() const
{
    return this->maximoElemento;
}


int VectorDinamico::getMinimoElemento() const
{
    return this->minimoElemento;
}

int VectorDinamico::getPromedioVector() const
{
    return this->promedioVector;
}
