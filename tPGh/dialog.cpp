#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle(QString::fromStdString("DATOS DE LA PERSONA"));
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::cargarPersona(Persona* persona)
{

    //Cuando cree la clase nivel, un get nivel determinara cuantos labels van a ser seteados mediante un if, dejo el proto echo
    if(this->nivAct.getNivelActual() == 1)
    {
        ui->labelNac->setText(QString::fromStdString(persona->getNacionalidad()));
        ui->labelDia->setText(QString::fromStdString(persona->getFechaNac().substr(6,8)));
        ui->labelMes->setText(QString::fromStdString(persona->getFechaNac().substr(4,6)));
        ui->labelAnio->setText(QString::fromStdString(persona->getFechaNac().substr(0,4)));
        ui->labelTipoVisita->setText(QString::fromStdString(persona->getTipoVisita()));
        ui->labelDuracionVis->setText(QString::fromStdString(persona->getDuracionEstancia()));
        ui->labelEstadoCivil->setText(QString::fromStdString(persona->getEstadoCivil()));
        ui->labelEstadoVisa->setText(QString::fromStdString(persona->getEstadoVisa()));
        ui->labelMesanjeLlegada->setText(QString::fromStdString(persona->getMensaje()));
    }
    if(this->nivAct.getNivelActual() == 2)
    {
        ui->labelNac->setText(QString::fromStdString(persona->getNacionalidad()));
        ui->labelDia->setText(QString::fromStdString(persona->getFechaNac().substr(6,8)));
        ui->labelMes->setText(QString::fromStdString(persona->getFechaNac().substr(4,6)));
        ui->labelAnio->setText(QString::fromStdString(persona->getFechaNac().substr(0,4)));
        ui->labelTipoVisita->setText(QString::fromStdString(persona->getTipoVisita()));
        ui->labelDuracionVis->setText(QString::fromStdString(persona->getDuracionEstancia()));
        ui->labelEstadoCivil->setText(QString::fromStdString(persona->getEstadoCivil()));
        ui->labelEstadoVisa->setText(QString::fromStdString(persona->getEstadoVisa()));
        ui->labelPaisRes->setText(QString::fromStdString(persona->getPaisRes()));
        ui->labelPropositoViaje->setText(QString::fromStdString(persona->getPropositoViaje()));
        ui->labelMesanjeLlegada->setText(QString::fromStdString(persona->getMensaje()));
    }
    if(this->nivAct.getNivelActual() == 3)
    {
        ui->labelNac->setText(QString::fromStdString(persona->getNacionalidad()));
        ui->labelDia->setText(QString::fromStdString(persona->getFechaNac().substr(6,8)));
        ui->labelMes->setText(QString::fromStdString(persona->getFechaNac().substr(4,6)));
        ui->labelAnio->setText(QString::fromStdString(persona->getFechaNac().substr(0,4)));
        ui->labelTipoVisita->setText(QString::fromStdString(persona->getTipoVisita()));
        ui->labelDuracionVis->setText(QString::fromStdString(persona->getDuracionEstancia()));
        ui->labelEstadoCivil->setText(QString::fromStdString(persona->getEstadoCivil()));
        ui->labelEstadoVisa->setText(QString::fromStdString(persona->getEstadoVisa()));
        ui->labelPaisRes->setText(QString::fromStdString(persona->getPaisRes()));
        ui->labelPropositoViaje->setText(QString::fromStdString(persona->getPropositoViaje()));
        ui->labelEstaAcomp->setText(QString::fromStdString(persona->getViajaSolo()));
        ui->labelMesanjeLlegada->setText(QString::fromStdString(persona->getMensaje()));
    }
    if(this->nivAct.getNivelActual() == 4)
    {
        ui->labelNac->setText(QString::fromStdString(persona->getNacionalidad()));
        ui->labelDia->setText(QString::fromStdString(persona->getFechaNac().substr(6,8)));
        ui->labelMes->setText(QString::fromStdString(persona->getFechaNac().substr(4,6)));
        ui->labelAnio->setText(QString::fromStdString(persona->getFechaNac().substr(0,4)));
        ui->labelTipoVisita->setText(QString::fromStdString(persona->getTipoVisita()));
        ui->labelDuracionVis->setText(QString::fromStdString(persona->getDuracionEstancia()));
        ui->labelEstadoCivil->setText(QString::fromStdString(persona->getEstadoCivil()));
        ui->labelEstadoVisa->setText(QString::fromStdString(persona->getEstadoVisa()));
        ui->labelPaisRes->setText(QString::fromStdString(persona->getPaisRes()));
        ui->labelPropositoViaje->setText(QString::fromStdString(persona->getPropositoViaje()));
        ui->labelEstaAcomp->setText(QString::fromStdString(persona->getViajaSolo()));
        ui->labelVisasAnteriores->setText(QString::fromStdString(persona->getEstadoVisaPrevia()));
        ui->labelMesanjeLlegada->setText(QString::fromStdString(persona->getMensaje()));
    }
    if(this->nivAct.getNivelActual() == 5){
        ui->labelNac->setText(QString::fromStdString(persona->getNacionalidad()));
        ui->labelDia->setText(QString::fromStdString(persona->getFechaNac().substr(6,8)));
        ui->labelMes->setText(QString::fromStdString(persona->getFechaNac().substr(4,6)));
        ui->labelAnio->setText(QString::fromStdString(persona->getFechaNac().substr(0,4)));
        ui->labelTipoVisita->setText(QString::fromStdString(persona->getTipoVisita()));
        ui->labelDuracionVis->setText(QString::fromStdString(persona->getDuracionEstancia()));
        ui->labelEstadoCivil->setText(QString::fromStdString(persona->getEstadoCivil()));
        ui->labelEstadoVisa->setText(QString::fromStdString(persona->getEstadoVisa()));
        ui->labelPaisRes->setText(QString::fromStdString(persona->getPaisRes()));
        ui->labelPropositoViaje->setText(QString::fromStdString(persona->getPropositoViaje()));
        ui->labelEstaAcomp->setText(QString::fromStdString(persona->getViajaSolo()));
        ui->labelVisasAnteriores->setText(QString::fromStdString(persona->getEstadoVisaPrevia()));
        ui->labelAntecedentes->setText(QString::fromStdString(persona->getAntecedentesPenales()));
        ui->labelRequiza->setText(QString::fromStdString(persona->getResultadoRequizar()));
        ui->labelMesanjeLlegada->setText(QString::fromStdString(persona->getMensaje()));
    }
}



void Dialog::on_aceptarVista_clicked()
{
    accept();
}

void Dialog::on_aceptarDatos_clicked()
{
    accept();
}

