#include "persona.h"
#include <string>
#include <QMessageBox>
#include <QDebug>


using namespace std;


Persona::Persona(string nac, string fec, string tipo, string duracion, string estadoC,
                 string estadoV, string paisRes, string propositoViaje,string viajaSolo,
                string visasPrevias,string antecedentes,string estRequiza)
{
    this->nacionalidad=nac;
    this->fechaNac=fec;
    this->tipoVisita=tipo;
    this->duracionEstancia=duracion;
    this->estadoCivil=estadoC;
    this->estadoVisa=estadoV;
    this->paisRes = paisRes;
    this->propositoViaje = propositoViaje;
    this->viajaSolo = viajaSolo;
    this->estadoVisaPrevia = visasPrevias;
    this->antecedentesPenales = antecedentes;
    this->resultadoRequizar = estRequiza;

}


std::string Persona::getNacionalidad()
{
    return this->nacionalidad;
}

std::string Persona::getFechaNac()
{
    return this->fechaNac;
}

std::string Persona::getTipoVisita()
{
    return this->tipoVisita;
}

std::string Persona::getEstadoCivil()
{
    return this->estadoCivil;
}

std::string Persona::getDuracionEstancia()
{
    return this->duracionEstancia;
}



Persona&Persona::operator=(const Persona &other)
{
    if(this == &other)
    {
        return *this;
    }
}

string Persona::getEstadoVisa() const
{
    return this->estadoVisa;
}

string Persona::getPaisRes() const
{
    return this->paisRes;
}

string Persona::getPropositoViaje() const
{
    return this->propositoViaje;
}

string Persona::getViajaSolo() const
{
    return this->viajaSolo;
}

string Persona::getEstadoVisaPrevia() const
{
    return this->estadoVisaPrevia;
}

string Persona::getAntecedentesPenales() const
{
    return this->antecedentesPenales;
}

string Persona::getResultadoRequizar() const
{
    return this->resultadoRequizar;
}

string Persona::getMensaje()
{
    if(this->calcularPuntos()==25) return "Es un honor representar a mi pais";
    if(this->calcularPuntos()==-25) return "Que ganas de poner una C4 en la rosada";
    if(this->calcularPuntos()==15) return "Extranio a mi patria...";
    else return "Hola, buen dia";
}
