#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<string,string>agenda;

    //Agregar personas a la agenda
    agenda["Gon"] = "3456022171";
    agenda["Luchy"] = "3434476656";
    agenda["Bauti"] = "3455678767";

    //Iterar sobre el mapa

    for(map<string,string>::iterator j = agenda.begin(); j != agenda.end(); ++j)
        cout << j->first << " -> " << j->second << endl;

    cout << "Ingrese una llave: ";
    string auxString;
    cin >> auxString;

    map<string,string>::iterator j;
    j = agenda.find(auxString);
    if(j != agenda.end())
    {
        cout << j->second;
    }else{
        cout << "No existe esta llave! :/ " << endl;
        agenda.clear();
    }


    return 0;
}
