#ifndef ALUMNOS_H
#define ALUMNOS_H
#include <string>


class Alumnos
{
public:
    Alumnos(char*,int,int,int,int);
    int calcularPromedio();
    void setNota1(int);
    void setNota2(int);
    void setNota3(int);
    void setNota4(int);
    char *getAlumno() const;
    int getPromedio() const;
private:
    int nota1;
    int nota2;
    int nota3;
    int nota4;
    char* alumno;
    int promedio;
};

#endif // ALUMNOS_H
