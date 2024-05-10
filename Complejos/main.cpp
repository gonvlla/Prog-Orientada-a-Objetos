#include <iostream>
#include "complejo.h"
using namespace std;

int main()
{
    int opc;
    int i1,i2;
    int r1,r2;
    Complejo resultado(0,0);

    cout << "Parte real del numero complejo 1: ";
    cin >> r1;

    cout << "Parte imaginaria del numero complejo 1: ";
    cin >> i1;

    Complejo c1(r1,i1);

    cout << endl;
    cout << "Parte real del numero complejo 2: ";
    cin >> r2;

    cout << "Parte imaginaria del numero complejo 2: ";
    cin >> i2;

    Complejo c2(r2,i2);

    cout << "Complejo 1 : ";
    if(i1>0)cout << c1.getParteReal() << "+" <<  c1.getParteImaginaria() << "i" << endl;
    cout << endl;
    cout << "Complejo 2 : ";
    if(i2>0)cout << c2.getParteReal() << "+" <<  c2.getParteImaginaria() << "i" << endl;
    cout << endl << endl;



    do{
        cout << endl;
        cout << "MENU DE OPCIONES - NUMEROS COMPLEJOS " << endl;
        cout << "Seleccione una opcion: \n";
        cout << "0 - Salir. \n";
        cout << "1 - Sumar Complejos. \n";
        cout << "2 = Restar Complejos. \n";
        cout << "3 - Multiplicar Complejos. \n";
        //cout << "4 - Dividir Complejos. \n";
        cin >> opc;
        switch (opc) {
        case 0:
            break;
        case 1:
            resultado = c1.sumaComplejos(c2);
            cout << "El resultado es: ";
            if(resultado.getParteImaginaria() > 0) cout << resultado.getParteReal() << " + " << resultado.getParteImaginaria() << 'i';
            break;
        case 2:
            resultado = c1.restaComplejos(c2);
            cout << "El resultado es: ";
            if(resultado.getParteImaginaria() > 0) cout << resultado.getParteReal() << " + " << resultado.getParteImaginaria() << 'i';
            break;
        case 3:
            resultado = c1.multiplicacionComplejo(c2);
            cout << "El resultado es: ";
            if(resultado.getParteImaginaria() > 0) cout << resultado.getParteReal() << " + " << resultado.getParteImaginaria() << 'i';
            break;
        //case 4:
        //    c1.dividirComplejo(c2);
        //    break;
        }
        cout << endl;
    }while(opc!=0);

    return 0;
}
