#include <iostream>
#include  <map>

using namespace std;

/*Realice un programa que al igual que una agenda de cumpleaños que dada una fecha,
retorne las personas que nacieron dicha fecha. Realice en el main que permita probar la
agenda.*/

int main()
{
    map<string,string> misPersonas;

    ///Cargo manualmente unas keys value

    misPersonas["11082005"] = "Ulises";
    misPersonas["29102002"] = "Gonzalo";
    misPersonas["12111978"] = "Cecilia";

    ///Ingreso de la clave de parte del usuario

    string key;

    cout << "Ingrese una fecha de cumpleanios (ddmmaaaa): ";
    cin >> key;

    //Creo un iterator de map

    map<string,string>::iterator j;

    //Busco la key dentro de mi map

    j = misPersonas.find(key);

    if(j != misPersonas.end())
    {
        cout << j->second << endl;
    }else{
        cout << "No existe un valor asociado a la key: " << key << " !" << endl;
    }



    return 0;
}
