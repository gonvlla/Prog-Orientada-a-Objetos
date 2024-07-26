#ifndef JUEGO_H
#define JUEGO_H
#define _GLIBCXX_USE_CXX11_ABI 0

#include "persona.h"
#include "aldeano.h"
#include "diplomatico.h"
#include "refugiadopolitico.h"
#include "revolucionario.h"
#include "Contenedora.h"
#include <cstdlib>
#include <ctime>
#include <QMessageBox>
#include <string.h>
#include <QDebug>
#include "nivel.h"


class Juego : public Nivel
{
public:
    Juego(Contenedora* );

    bool comprobarDatos(Persona*); //Para implementar comprobar, primero necesito los datos de la persona

    int getMultasTotales() ; //Para setear en mw

    int getPuntosTotales() ; //Para setear en mw

    void setPuntosTotales(int); //Para actualizar, lo actualiza juego

    void setMultasTotales(); //Para actualizar, lo actualiza juego

    void cargarRequerimentos();

    void cargaDatos(); //Lee el archivo con las personas y guardara una referencia en contenedora

    bool multar();

    void incrementarPuntos(Persona *);

    void enPuntosNegativos();

    Persona* inidcarQuineEsa(bool);

    void comprobarPersona(Persona* , bool);

private:
    int puntosTotales = 0;

    int multasTotales = 0;

    Contenedora* contenedor;

    int nroPersonaPresente = 0;

    Nivel* nivel;

    //Requerimentos

    std::string nacPermitida[5];
    std::string fechaNac; //Aca hay un subst para el formato aaaammdd
    std::string tipoVisita[4]; //Todas
    std::string estadoCivil[4]; //Todos
    std::string estadoVisa; //Solamente aprobada
    std::string paisesResidencia[3]; // eeuu,peru,afganistan
    std::string duracionEstancia; // Menor a 1 anio
    std::string propositoViaje[3]; //turismo, visita_familiar y no me acuerdo la otra
    std::string viajaAcom; //Solamente solo
    std::string visasPrevias; //Aprobadas
    std::string antecedentes; //no debe presentar
    std::string requiza; //limpio
};

#endif // JUEGO_H
