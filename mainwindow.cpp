#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(QString::fromStdString("Control Fronterizo"));

    //Esto es para  que el usuario no pueda maximizar la ventana
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowMaximizeButtonHint);
    this->setFixedSize(this->size()); // Establecer tamanio fijo para evitar el cambio de tamanio

    this->frontera = new Contenedora();

    this->juego = new Juego(this->frontera);

    this->juego->cargarRequerimentos(); //Carga los requerimentos del juego

    this->nivelJuego = new Nivel();

    this->nivelEntero = this->nivelJuego->getNivelActual(); //Obtiene el nivel actual

    ui->labelNivel->setText(QString::number(this->nivelJuego->getNivelActual())); //Setea en el label el niv act

    ui->labelCantPuntos->setText(QString::number(this->juego->getPuntosTotales()));

    ui->labelMultasTt->setText(QString::number(this->juego->getMultasTotales()));

    this->juego->cargaDatos();

}

void MainWindow::restablecerJuego()
{
    //Restablecer datos del juego

    delete[] this->juego;
    this->juego = new Juego(this->frontera);

    //Restablecer el nivel

    delete[] this->nivelJuego;
    this->nivelJuego = new Nivel();

    //Reiniciar los widgets

    ui->labelNivel->setText(QString::number(this->nivelJuego->getNivelActual()));
    ui->labelCantPuntos->setText(QString::number(this->juego->getPuntosTotales()));
    ui->labelMultasTt->setText(QString::number(this->juego->getMultasTotales()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonDatos_clicked()
{
    Dialog w;
    w.cargarPersona(this->juego->inidcarQuineEsa(this->band));
    w.exec(); //Ejecutara la ventana
    this->band = false;
}


void MainWindow::on_pushButtonAceptar_clicked()
{
    this->entrada = true;

    this->band = true;

    //Actualizar los puntos

    juego->comprobarPersona(this->juego->inidcarQuineEsa(this->band),this->entrada);

    /*if(this->juego->getPuntosTotales()  > 0)
    {
        QMessageBox::information(this,"AVISO","Puntos actualizados correctamente! ");
    }

    if(this->juego->getPuntosTotales()  < 0)
    {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this,"Fin del Juego","Desea volver a jugar? ",
                                      QMessageBox::Yes|QMessageBox::No);
        if(reply == QMessageBox::Yes)
            this->restablecerJuego();
        if(reply == QMessageBox::No)
            QApplication::quit();
    }*/
}


void MainWindow::on_pushButtonDenegar_clicked()
{
    this->band = true;

    this->entrada = false;

    juego->comprobarPersona(this->juego->inidcarQuineEsa(this->band),this->entrada);

    this->nivelJuego->detectarNivelActual(this->juego->getPuntosTotales());

    /*QMessageBox::information(this,"AVISO","Puntos actualizados correctamente! ");

    if(this->juego->getPuntosTotales() < 0)
    {   //Si tiene puntos negativos le doy la opcion de volver a jugar
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this,"Fin del Juego","Desea volver a jugar? ",
                                      QMessageBox::Yes|QMessageBox::No);
        if(reply == QMessageBox::Yes)
            this->restablecerJuego();
        if(reply == QMessageBox::No)
            QApplication::quit();
    }
    }*/
}

void MainWindow::on_pushButton_clicked()
{
    REGLAS rA;
    rA.exec();
}

