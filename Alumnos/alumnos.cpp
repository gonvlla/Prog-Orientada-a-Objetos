#include "alumnos.h"


Alumnos::Alumnos(char* nombre, int nota1, int nota2, int nota3, int nota4)
{
    this->alumno = nombre;
    this->nota1 = nota1;
    this->nota2 = nota2;
    this->nota3 = nota3;
    this->nota4 = nota4;
}

int Alumnos::calcularPromedio()
{
    return this->promedio = ((this->nota1 + this->nota2 + this->nota3 + this->nota4)/4);

}

void Alumnos::setNota1(int nota1)
{
    this->nota1 = nota1;
}

void Alumnos::setNota2(int nota2)
{
    this->nota2 = nota2;
}

void Alumnos::setNota3(int nota3)
{
    this->nota3 = nota3;
}

void Alumnos::setNota4(int nota4)
{
    this->nota4 = nota4;
}

char *Alumnos::getAlumno() const //Nombre del alumno
{
    return this->alumno;
}

int Alumnos::getPromedio() const
{
    return this->promedio;
}



