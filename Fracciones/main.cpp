#include <iostream>
#include "fracciones.h"

using namespace std;

int main()
{
    Fracciones fraccion1(10,4),fraccion2(20,4),fraccion3(2,5),fraccion4(3,6);

    cout << endl << "Fraccion 1: " << fraccion1.getNumerador() << '/' << fraccion1.getDenominador() << endl;
    cout << endl << "Fraccion 2: " << fraccion2.getNumerador() << '/' << fraccion2.getDenominador() << endl;


    cout << "Suma de: " << fraccion1.getNumerador() << '/' << fraccion1.getDenominador() << " y ";

    cout << fraccion2.getNumerador() << '/' << fraccion2.getDenominador() << endl;

    fraccion1.sumaFraccion(fraccion2);

    fraccion1.simplificaFraccion();

    cout << "Resultado suma simplificada: " << fraccion1.getNumerador() << '/' << fraccion1.getDenominador() << endl;

    cout << "Resta entre: " << fraccion1.getNumerador() << '/' << fraccion1.getDenominador();

    cout << " y " << fraccion2.getNumerador() << '/' << fraccion2.getDenominador() << endl;

    fraccion1.restaFraccion(fraccion2);


    cout << "Resultado: " << fraccion1.getNumerador() << '/' << fraccion1.getDenominador() << endl;

    cout << "Mult de: " << fraccion3.getNumerador() << '/' << fraccion3.getDenominador() << " y ";

    cout << fraccion4.getNumerador() << '/' << fraccion4.getDenominador() << endl;

    fraccion3.multiplicarFraccion(fraccion4);
    fraccion3.simplificaFraccion();


    cout << "Resultado simplificado: " << fraccion3.getNumerador() << '/' << fraccion3.getDenominador() << endl;

    Fracciones fraccion5(10,4),fraccion6(20,2);

    cout << "Div entre: " << fraccion5.getNumerador() << '/' << fraccion5.getDenominador();

    cout << " y " << fraccion6.getNumerador() << '/' << fraccion6.getDenominador() << endl;

    fraccion5.dividirFracciones(fraccion6);
    fraccion5.simplificaFraccion();

    cout << "Resultado: " << fraccion5.getNumerador() << '/' << fraccion5.getDenominador() << endl;


    return 0;
}
