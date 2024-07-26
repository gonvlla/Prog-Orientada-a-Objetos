#ifndef PERSONA_H
#define PERSONA_H
#define _GLIBCXX_USE_CXX11_ABI 0
#include <QMessageBox>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;


class Persona
{
public:
    Persona(string,string,string,string,string,string,string,string,string, string, string,string);//Antecedentes y requizaz

    string getNacionalidad() ;

    string getFechaNac() ;

    string getTipoVisita() ;

    string getEstadoCivil() ;

    string getDuracionEstancia() ;

    Persona& operator=(const Persona& ); //Sobrecarga el operador para agregar las referencias de persona

    string getEstadoVisa() const;

    virtual int calcularPuntos() = 0; //Metodo virutal para calcular puntos dependiendo del tipo de persona

    string getPaisRes() const;

    string getPropositoViaje() const;

    string getViajaSolo() const;

    string getEstadoVisaPrevia() const;

    string getAntecedentesPenales() const;

    string getResultadoRequizar() const;

    string getMensaje();
protected:
    //Niv1
    string nacionalidad;
    string fechaNac;
    string tipoVisita;
    string estadoCivil;
    string duracionEstancia;
    string estadoVisa;

    //Niv2
    string paisRes;
    string propositoViaje;
    //Niv3
    string viajaSolo;
    //Niv 4
    string estadoVisaPrevia;
    //Niv 5
    string antecedentesPenales;
    string resultadoRequizar;

};

#endif // PERSONA_H
