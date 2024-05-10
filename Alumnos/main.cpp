#include <iostream>
#include "alumnos.h"

using namespace std;

int main()
{
    Alumnos unAlumno("Alumno1",10,10,10,10),otroAlumno("Alumno2",40,40,40,40);
    unAlumno.calcularPromedio();
    cout << "El alumno: " << unAlumno.getAlumno() << ", obtuvo promedio: " << unAlumno.getPromedio() << "%" << endl;
    cout << endl;
    otroAlumno.calcularPromedio();
    cout << "El alumno: " << otroAlumno.getAlumno() << ", obtuvo promedio: " << otroAlumno.getPromedio() << "%" << endl;
    return 0;
}
