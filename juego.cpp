#include "juego.h"
#include <fstream>
#include <QDebug>

Juego::Juego(Contenedora* c)
{
    this->contenedor = c;
}

int Juego::getMultasTotales()
{
    return this->multasTotales;
}

int Juego::getPuntosTotales()
{
    return this->puntosTotales;
}

void Juego::setPuntosTotales(int puntosTotales)
{
    this->puntosTotales += puntosTotales;
}

void Juego::setMultasTotales()
{
    this->multasTotales= multasTotales+1;
}

void Juego::cargarRequerimentos()
{
    std::ifstream file;
    file.open("requerimentos.txt");
    string palabra;
    if(!file.fail())
    {
        //Nacionalidad Permitida
        for(int i=0; i<5; i++){
            getline(file, palabra);
            this->nacPermitida[i]=palabra;
        }
        //Fecha de nacimiento
        getline(file, palabra);
        this->fechaNac=palabra;
        //Tipos de Visitas
        for(int i=0; i<4; i++){
            getline(file, palabra);
            this->tipoVisita[i]=palabra;
        }
        //Duracion de Estancia
        getline(file, palabra);
        this->duracionEstancia=palabra;
        //Estados Civiles
        for(int i=0; i<4; i++){
            getline(file, palabra);
            this->estadoCivil[i]=palabra;
        }
        //Estado de Visa
        getline(file, palabra);
        this->estadoVisa=palabra;
        //Paises de residencia
        for(int i=0; i<3; i++){
            getline(file, palabra);
            this->paisesResidencia[i]=palabra;
        }
        //Poposito de viaje
        for(int i=0; i<3; i++){
            getline(file, palabra);
            this->propositoViaje[i]=palabra;
        }
        //Acompaniantes
        getline(file, palabra);
        this->viajaAcom=palabra;
        //Visas Previas
        getline(file, palabra);
        this->visasPrevias=palabra;
        //Antecedentes
        getline(file, palabra);
        this->antecedentes=palabra;
        //Requiza
        getline(file, palabra);
        this->requiza=palabra;
    }
    else
    {
        qDebug() << "Error al abrir el archivo de REQUERIMIENTOS";
    }

    file.close();
}
/*
void Juego::cargarRequerimentos()
{
    std::ifstream file;
    file.open("requerimentos.txt");

    if (!file.fail())
    {
        //nac permitidas
        std::string nacionalidades;
        if (std::getline(file, nacionalidades)) {
            std::stringstream ss(nacionalidades);
            std::string nacionalidad;
            int i = 0;
            while (std::getline(ss, nacionalidad, ',') && i < 5) {
                this->nacPermitida[i] = nacionalidad;
                ++i;
            }
        }

        //fecha nacimien permitida
        if (std::getline(file, this->fechaNac)){};

        //tipos d visita permitidas
        std::string tiposVisita;
        if (std::getline(file, tiposVisita)) {
            std::stringstream ss(tiposVisita);
            std::string tipoVisita;
            int i = 0;
            while (std::getline(ss, tipoVisita, ',') && i < 4) {
                this->tipoVisita[i] = tipoVisita;
                ++i;
            }
        }

        //max duracion estancia
        if (std::getline(file, this->duracionEstancia)){};

        //ec permitido
        std::string estadosCiviles;
        if (std::getline(file, estadosCiviles)) {
            std::stringstream ss(estadosCiviles);
            std::string estadoCivil;
            int i = 0;
            while (std::getline(ss, estadoCivil, ',') && i < 4) {
                this->estadoCivil[i] = estadoCivil;
                ++i;
            }
        }

        //estado de la visa permitida
        if (std::getline(file, this->estadoVisa)){};

        //paso anteriores
        std::string nacionalidadesAdicionales;
        if (std::getline(file, nacionalidadesAdicionales)) {
            std::stringstream ss(nacionalidadesAdicionales);
            std::string nacionalidad;
            int i = 0;
            while (std::getline(ss, nacionalidad, ',') && i < 3) {
                this->paisesResidencia[i] = nacionalidad;
                ++i;
            }
        }

        //proposito viaje
        std::string propViaje;
        if (std::getline(file, propViaje)) {
            std::stringstream ss(propViaje);
            std::string tipoVisita;
            int i = 0;
            while (std::getline(ss, tipoVisita, ',') && i < 3) {
                this->propositoViaje[i] = tipoVisita;
                ++i;
            }
        }

        //si viaja solo
        if (std::getline(file, this->viajaAcom)){};

        //Visas previas
        if (std::getline(file, this->visasPrevias)){};

        //Antecedentes
        if (std::getline(file,this->antecedentes)){};

        //Requiza
        if (std::getline(file, this->requiza)){};
    }
    else
    {
        qDebug() << "Error al abrir el archivo de REQUERIMIENTOS";
    }

    file.close();
}
*/
void Juego::cargaDatos()
{
    ifstream file;
    string palabra;
    string buffer [12];

    int cont = 0;

    file.open("llegada_frontera.txt");

    if(file.is_open()){

        while(getline(file,palabra))
        {
            buffer[cont] = palabra;
            cont++;
            //Guarda todos los "atributos" y los muestra dependiendo el nivel(qdialog)
            if(cont == 12)
            {
                this->contenedor->insertarPersona(buffer);
                cont = 0;
            }
        }
        file.close();
    }
    else{
        qDebug() << "Error al abrir el archivo de FRONTERA";
    }
}

bool Juego::multar()
{
    this->multasTotales++;
    if(this->multasTotales > 0) return true; //Hacer un llamado en mainwindow para el qmenssagebox
    return false;
}

Persona *Juego::inidcarQuineEsa(bool band)
{
    return this->contenedor->sacarPersona(this->nroPersonaPresente);
}


void Juego::comprobarPersona(Persona* personaActual,bool entrada) //Pasar la instancia del mw por parametros, con contenedora, pasar una bandera para saber si se acepto o no a la persona
{
    //Calculo de la edad minima (18 anos), fecha del juego 20/06/2024

    int aaa = stoi(this->fechaNac.substr(0,4)); //2006

    int mmm = stoi(this->fechaNac.substr(4,6)); //06

    int ddd = stoi(this->fechaNac.substr(6,8));//24

    int contRQ = 0; //Requerimentos cumplidos

    //bool nivelAnteriorAprobado = false;

    /*
    qDebug()<<"Estado de visa PERSONA: "<<personaActual->getEstadoVisa();
    //qDebug()<<"Estado de visa RQ: "<<this->estadoVisa;
    qDebug()<<"Fecha Nacimiento PERSONA: "<<personaActual->getFechaNac();
    //qDebug()<<"Fecha Nacimiento RQ: "<<this->fechaNac;
    qDebug()<<"Duracion de Estancia PERSONA: "<<personaActual->getDuracionEstancia();
    //qDebug()<<"Duracion de Estancia RQ: "<<this->duracionEstancia;
    qDebug()<<"Nacionalidad PERSONA: "<<personaActual->getNacionalidad();
    //qDebug()<<"Nacionalidad RQ: "<<this->nacPermitida[0];
    qDebug()<<"Tipo de Visita PERSONA: "<<personaActual->getTipoVisita();
    //qDebug()<<"Tipo de Visita RQ: "<<this->tipoVisita[0];
    qDebug()<<"Estado Civil PERSONA: "<<personaActual->getEstadoCivil();
    //qDebug()<<"Estado Civil RQ: "<<this->estadoCivil[0];
    qDebug()<<"TIPO DE PERSONA: "<<personaActual->calcularPuntos(); */


    //Revisar los req base
    if(personaActual->getEstadoVisa() == this->estadoVisa)
    {

        contRQ++; //Primer req cumplido

        //Fecha del ingresante
        int aII = stoi(personaActual->getFechaNac().substr(0,4));
        int mII = stoi(personaActual->getFechaNac().substr(4,6));
        int dII = stoi(personaActual->getFechaNac().substr(6,8));

        if(aII < aaa) contRQ++; //Posible c1
        if(aII == aaa && mII < mmm) contRQ++; //Posible c2
        if(aII == aaa && mII == mmm && dII<ddd) contRQ++; //Posible c3

        int durEsPersona = stoi(personaActual->getDuracionEstancia());
        int durEsReq = stoi(this->duracionEstancia);

        if(durEsPersona <= durEsReq) contRQ++;

        //Bucle para iterar sobre las posibles nacionalidadees,etc
        for(int i = 0; i < 5;i++) if(personaActual->getNacionalidad() == this->nacPermitida[i]) contRQ++;

        for(int i = 0; i < 4; i ++) if(personaActual->getTipoVisita() == this->tipoVisita[i]) contRQ++;

        for(int i = 0; i < 4; i++) if(personaActual->getEstadoCivil() == this->estadoCivil[i]) contRQ++;
    }

    if(this->getNivelActual() == 1 && contRQ == 6 && entrada==true && personaActual->calcularPuntos()!=-25)
    {
        //totales = totales + personaActual->calcularPuntos();
        this->puntosTotales = this->puntosTotales+personaActual->calcularPuntos(); //Si se cumplen setea los puntos en puntos totales
    }
    else{
        if(personaActual->calcularPuntos() == 10 && contRQ<6 && entrada==true) {this->puntosTotales = this->puntosTotales - 15;}  //Si dejas pasar un ALDEANO que no cumple los 6 RQ perdes 15 puntos
        if(personaActual->calcularPuntos() == 15 && contRQ<6 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un REFUGIADO que no cumple los 6 RQ perdes 25 puntos
        if(personaActual->calcularPuntos() == 25 && contRQ<6 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un DIPLOMATICO que no cumple los 6 RQ perdes 25 puntos

        if(personaActual->calcularPuntos() == 25 && contRQ==6 && entrada==false) this->setMultasTotales(); //Si no dejas pasar a un DIPLOMATICO que cumple los 6 RQ te comes una multa
        if(personaActual->calcularPuntos() == 25 && contRQ==6 && entrada==false) {this->puntosTotales = this->puntosTotales - 25;} //Si no dejas pasar a un DIPLOMATICO que cumple los 6 RQ perdes 25 puntos

        if(personaActual->calcularPuntos() == -25 && entrada==true){this->puntosTotales = this->puntosTotales -25;}   //Si dejas pasar a un REVOLUCIONARIO perdes 25 puntos
        if(personaActual->calcularPuntos() == -25 && entrada==true) this->setMultasTotales(); //Si dejas pasar a un REVOLUCIONARIO te comes una multa
        if(personaActual->calcularPuntos() == -25 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un REVOLUCIONARIO obtenes 25 puntos

        //En caso de rechazar BIEN a una persona, se le otorga puntos
        if(personaActual->calcularPuntos() == 10 && contRQ<6 && entrada==false) {this->puntosTotales = this->puntosTotales + 10;} //Si rechazas a un ALDEANO que no cumplia los 6 RQ ganas 10 puntos
        if(personaActual->calcularPuntos() == 15 && contRQ<6 && entrada==false) {this->puntosTotales = this->puntosTotales + 15;} //Si rechazas a un REFUGIADO que no cumplia los 6 RQ ganas 15 puntos
        if(personaActual->calcularPuntos() == 25 && contRQ<6 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un DIPLOMATICO que no cumplia los 6 RQ ganas 25 puntos
    }

    if(this->getNivelActual() == 2)
    {
        contRQ = 0;
        if(personaActual->getEstadoVisa() == this->estadoVisa)
        {
            contRQ++; //Primer req cumplido
            //Fecha del ingresante
            int aII = stoi(personaActual->getFechaNac().substr(0,4));
            int mII = stoi(personaActual->getFechaNac().substr(4,6));
            int dII = stoi(personaActual->getFechaNac().substr(6,8));

            if(aaa > aII) contRQ++; //Posible c1
            if(aaa == aII && mII == mmm && dII >= ddd) contRQ++; //Posible c2
            if(aaa == aII && mII >= mmm) contRQ++; //Posible c3
            int durEsPersona = stoi(personaActual->getDuracionEstancia());
            int durEsReq = stoi(this->duracionEstancia);

            if(durEsPersona <= durEsReq) contRQ++;
            //Bucle para iterar sobre las posibles nacionalidadees,etc
            for(int i = 0; i < 5;i++) if(personaActual->getNacionalidad() == this->nacPermitida[i]) contRQ++;

            for(int i = 0; i < 4; i ++) if(personaActual->getTipoVisita() == this->tipoVisita[i]) contRQ++;

            for(int i = 0; i < 4; i++) if(personaActual->getEstadoCivil() == this->estadoCivil[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPaisRes() == this->paisesResidencia[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPropositoViaje() == this->propositoViaje[i]) contRQ++;
        }
        if(this->getNivelActual() == 2 && contRQ == 8 && entrada==true && personaActual->calcularPuntos()!=-25)
        {
            //totales = totales + personaActual->calcularPuntos();
            this->puntosTotales = this->puntosTotales+personaActual->calcularPuntos(); //Si se cumplen setea los puntos en puntos totales
        }
        else{
            if(personaActual->calcularPuntos() == 10 && contRQ<8 && entrada==true) {this->puntosTotales = this->puntosTotales - 15;}  //Si dejas pasar un ALDEANO que no cumple los 8 RQ perdes 15 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<8 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un REFUGIADO que no cumple los 8 RQ perdes 25 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<8 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un DIPLOMATICO que no cumple los 8 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == 25 && contRQ==8 && entrada==false) this->setMultasTotales(); //Si no dejas pasar a un DIPLOMATICO que cumple los 8 RQ te comes una multa
            if(personaActual->calcularPuntos() == 25 && contRQ==8 && entrada==false) {this->puntosTotales = this->puntosTotales - 25;} //Si no dejas pasar a un DIPLOMATICO que cumple los 8 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == -25 && entrada==true){this->puntosTotales = this->puntosTotales -25;}   //Si dejas pasar a un REVOLUCIONARIO perdes 25 puntos
            if(personaActual->calcularPuntos() == -25 && entrada==true) this->setMultasTotales(); //Si dejas pasar a un REVOLUCIONARIO te comes una multa
            if(personaActual->calcularPuntos() == -25 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un REVOLUCIONARIO obtenes 25 puntos

            //En caso de rechazar BIEN a una persona, se le otorga puntos
            if(personaActual->calcularPuntos() == 10 && contRQ<8 && entrada==false) {this->puntosTotales = this->puntosTotales + 10;} //Si rechazas a un ALDEANO que no cumplia los 8 RQ ganas 10 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<8 && entrada==false) {this->puntosTotales = this->puntosTotales + 15;} //Si rechazas a un REFUGIADO que no cumplia los 8 RQ ganas 15 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<8 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un DIPLOMATICO que no cumplia los 8 RQ ganas 25 puntos
        }
    }

    if(this->getNivelActual() == 3)
    {
        contRQ = 0;
        if(personaActual->getEstadoVisa() == this->estadoVisa)
        {
            contRQ++; //Primer req cumplido
            //Fecha del ingresante
            int aII = stoi(personaActual->getFechaNac().substr(0,4));
            int mII = stoi(personaActual->getFechaNac().substr(4,6));
            int dII = stoi(personaActual->getFechaNac().substr(6,8));

            if(aaa > aII) contRQ++; //Posible c1
            if(aaa == aII && mII == mmm && dII >= ddd) contRQ++; //Posible c2
            if(aaa == aII && mII >= mmm) contRQ++; //Posible c3

            int durEsPersona = stoi(personaActual->getDuracionEstancia());
            int durEsReq = stoi(this->duracionEstancia);

            if(durEsPersona <= durEsReq) contRQ++;

            if(personaActual->getViajaSolo() == this->viajaAcom) contRQ++;

            //Bucle para iterar sobre las posibles nacionalidadees,etc
            for(int i = 0; i < 5;i++) if(personaActual->getNacionalidad() == this->nacPermitida[i]) contRQ++;

            for(int i = 0; i < 4; i ++) if(personaActual->getTipoVisita() == this->tipoVisita[i]) contRQ++;

            for(int i = 0; i < 4; i++) if(personaActual->getEstadoCivil() == this->estadoCivil[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPaisRes() == this->paisesResidencia[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPropositoViaje() == this->propositoViaje[i]) contRQ++;
        }
        if(this->getNivelActual() == 3 && contRQ == 9 && entrada==true && personaActual->calcularPuntos()!=-25)
        {
            //totales = totales + personaActual->calcularPuntos();
            this->puntosTotales = this->puntosTotales+personaActual->calcularPuntos(); //Si se cumplen setea los puntos en puntos totales
        }
        else{
            if(personaActual->calcularPuntos() == 10 && contRQ<9 && entrada==true) {this->puntosTotales = this->puntosTotales - 15;}  //Si dejas pasar un ALDEANO que no cumple los 9 RQ perdes 15 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<9 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un REFUGIADO que no cumple los 9 RQ perdes 25 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<9 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un DIPLOMATICO que no cumple los 9 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == 25 && contRQ==9 && entrada==false) this->setMultasTotales(); //Si no dejas pasar a un DIPLOMATICO que cumple los 6 RQ te comes una multa
            if(personaActual->calcularPuntos() == 25 && contRQ==9 && entrada==false) {this->puntosTotales = this->puntosTotales - 25;} //Si no dejas pasar a un DIPLOMATICO que cumple los 9 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == -25 && entrada==true){this->puntosTotales = this->puntosTotales -25;}   //Si dejas pasar a un REVOLUCIONARIO perdes 25 puntos
            if(personaActual->calcularPuntos() == -25 && entrada==true) this->setMultasTotales(); //Si dejas pasar a un REVOLUCIONARIO te comes una multa
            if(personaActual->calcularPuntos() == -25 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un REVOLUCIONARIO obtenes 25 puntos

            //En caso de rechazar BIEN a una persona, se le otorga puntos
            if(personaActual->calcularPuntos() == 10 && contRQ<9 && entrada==false) {this->puntosTotales = this->puntosTotales + 10;} //Si rechazas a un ALDEANO que no cumplia los 9 RQ ganas 10 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<9 && entrada==false) {this->puntosTotales = this->puntosTotales + 15;} //Si rechazas a un REFUGIADO que no cumplia los 9 RQ ganas 15 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<9 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un DIPLOMATICO que no cumplia los 9 RQ ganas 25 puntos
        }
    }
    if(this->getNivelActual() == 4)
    {
        contRQ = 0;
        if(personaActual->getEstadoVisa() == this->estadoVisa)
        {
            contRQ++; //Primer req cumplido
            //Fecha del ingresante
            int aII = stoi(personaActual->getFechaNac().substr(0,4));
            int mII = stoi(personaActual->getFechaNac().substr(4,6));
            int dII = stoi(personaActual->getFechaNac().substr(6,8));

            if(aaa > aII) contRQ++; //Posible c1
            if(aaa == aII && mII == mmm && dII >= ddd) contRQ++; //Posible c2
            if(aaa == aII && mII >= mmm) contRQ++; //Posible c3
            int durEsPersona = stoi(personaActual->getDuracionEstancia());
            int durEsReq = stoi(this->duracionEstancia);

            if(durEsPersona <= durEsReq) contRQ++;

            if(personaActual->getViajaSolo() == this->viajaAcom) contRQ++;

            if(personaActual->getEstadoVisaPrevia() == this->visasPrevias) contRQ++;

            //Bucle para iterar sobre las posibles nacionalidadees,etc
            for(int i = 0; i < 5;i++) if(personaActual->getNacionalidad() == this->nacPermitida[i]) contRQ++;

            for(int i = 0; i < 4; i ++) if(personaActual->getTipoVisita() == this->tipoVisita[i]) contRQ++;

            for(int i = 0; i < 4; i++) if(personaActual->getEstadoCivil() == this->estadoCivil[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPaisRes() == this->paisesResidencia[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPropositoViaje() == this->propositoViaje[i]) contRQ++;

        }
        if(this->getNivelActual() == 4 && contRQ == 10 && entrada==true && personaActual->calcularPuntos()!=-25)
        {
            //totales = totales + personaActual->calcularPuntos();
            this->puntosTotales = this->puntosTotales+personaActual->calcularPuntos(); //Si se cumplen setea los puntos en puntos totales
        }
        else{
            if(personaActual->calcularPuntos() == 10 && contRQ<10 && entrada==true) {this->puntosTotales = this->puntosTotales - 15;}  //Si dejas pasar un ALDEANO que no cumple los 10 RQ perdes 15 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<10 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un REFUGIADO que no cumple los 10 RQ perdes 25 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<10 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un DIPLOMATICO que no cumple los 10 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == 25 && contRQ==10 && entrada==false) this->setMultasTotales(); //Si no dejas pasar a un DIPLOMATICO que cumple los 10 RQ te comes una multa
            if(personaActual->calcularPuntos() == 25 && contRQ==10 && entrada==false) {this->puntosTotales = this->puntosTotales - 25;} //Si no dejas pasar a un DIPLOMATICO que cumple los 10 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == -25 && entrada==true){this->puntosTotales = this->puntosTotales -25;}   //Si dejas pasar a un REVOLUCIONARIO perdes 25 puntos
            if(personaActual->calcularPuntos() == -25 && entrada==true) this->setMultasTotales(); //Si dejas pasar a un REVOLUCIONARIO te comes una multa
            if(personaActual->calcularPuntos() == -25 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un REVOLUCIONARIO obtenes 25 puntos

            //En caso de rechazar BIEN a una persona, se le otorga puntos
            if(personaActual->calcularPuntos() == 10 && contRQ<10 && entrada==false) {this->puntosTotales = this->puntosTotales + 10;} //Si rechazas a un ALDEANO que no cumplia los 10 RQ ganas 10 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<10 && entrada==false) {this->puntosTotales = this->puntosTotales + 15;} //Si rechazas a un REFUGIADO que no cumplia los 10 RQ ganas 15 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<10 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un DIPLOMATICO que no cumplia los 10 RQ ganas 25 puntos
        }
    }

    if(this->getNivelActual() == 5){
        contRQ = 0;
        if(personaActual->getEstadoVisa() == this->estadoVisa)
        {
            contRQ++; //Primer req cumplido
            //Fecha del ingresante
            int aII = stoi(personaActual->getFechaNac().substr(0,4));
            int mII = stoi(personaActual->getFechaNac().substr(4,6));
            int dII = stoi(personaActual->getFechaNac().substr(6,8));

            if(aaa > aII) contRQ++; //Posible c1
            if(aaa == aII && mII == mmm && dII >= ddd) contRQ++; //Posible c2
            if(aaa == aII && mII >= mmm) contRQ++; //Posible c3
            int durEsPersona = stoi(personaActual->getDuracionEstancia());
            int durEsReq = stoi(this->duracionEstancia);

            if(durEsPersona <= durEsReq) contRQ++;
            //Bucle para iterar sobre las posibles nacionalidadees,etc
            for(int i = 0; i < 5;i++) if(personaActual->getNacionalidad() == this->nacPermitida[i]) contRQ++;

            for(int i = 0; i < 4; i ++) if(personaActual->getTipoVisita() == this->tipoVisita[i]) contRQ++;

            for(int i = 0; i < 4; i++) if(personaActual->getEstadoCivil() == this->estadoCivil[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPaisRes() == this->paisesResidencia[i]) contRQ++;

            for(int i = 0; i < 3; i++) if(personaActual->getPropositoViaje() == this->propositoViaje[i]) contRQ++;

            if(personaActual->getEstadoVisaPrevia() == this->visasPrevias) contRQ++;

            if(personaActual->getViajaSolo()==this->viajaAcom) contRQ++;

            if(personaActual->getAntecedentesPenales()==this->antecedentes) contRQ++;

            if(personaActual->getResultadoRequizar()==this->requiza) contRQ++;
        }
        if(this->getNivelActual() == 5 && contRQ == 12 && entrada==true && personaActual->calcularPuntos()!=-25)
        {
            //totales = totales + personaActual->calcularPuntos();
            this->puntosTotales = this->puntosTotales+personaActual->calcularPuntos(); //Si se cumplen setea los puntos en puntos totales
        }
        else{
            if(personaActual->calcularPuntos() == 10 && contRQ<12 && entrada==true) {this->puntosTotales = this->puntosTotales - 15;}  //Si dejas pasar un ALDEANO que no cumple los 12 RQ perdes 15 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<12 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un REFUGIADO que no cumple los 12 RQ perdes 25 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<12 && entrada==true) {this->puntosTotales = this->puntosTotales - 25;}  //Si dejas pasar un DIPLOMATICO que no cumple los 12 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == 25 && contRQ==12 && entrada==false) this->setMultasTotales(); //Si no dejas pasar a un DIPLOMATICO que cumple los 6 RQ te comes una multa
            if(personaActual->calcularPuntos() == 25 && contRQ==12 && entrada==false) {this->puntosTotales = this->puntosTotales - 25;} //Si no dejas pasar a un DIPLOMATICO que cumple los 12 RQ perdes 25 puntos

            if(personaActual->calcularPuntos() == -25 && entrada==true){this->puntosTotales = this->puntosTotales -25;}   //Si dejas pasar a un REVOLUCIONARIO perdes 25 puntos
            if(personaActual->calcularPuntos() == -25 && entrada==true) this->setMultasTotales(); //Si dejas pasar a un REVOLUCIONARIO te comes una multa
            if(personaActual->calcularPuntos() == -25 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un REVOLUCIONARIO obtenes 25 puntos

            //En caso de rechazar BIEN a una persona, se le otorga puntos
            if(personaActual->calcularPuntos() == 10 && contRQ<12 && entrada==false) {this->puntosTotales = this->puntosTotales + 10;} //Si rechazas a un ALDEANO que no cumplia los 12 RQ ganas 10 puntos
            if(personaActual->calcularPuntos() == 15 && contRQ<12 && entrada==false) {this->puntosTotales = this->puntosTotales + 15;} //Si rechazas a un REFUGIADO que no cumplia los 12 RQ ganas 15 puntos
            if(personaActual->calcularPuntos() == 25 && contRQ<12 && entrada==false) {this->puntosTotales = this->puntosTotales + 25;} //Si rechazas a un DIPLOMATICO que no cumplia los 12 RQ ganas 25 puntos
        }
    }
}



