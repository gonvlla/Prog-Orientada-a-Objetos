#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#define _GLIBCXX_USE_CXX11_ABI 0
#include <QMainWindow>
#include "juego.h"
#include "dialog.h"
#include "persona.h"
#include "Contenedora.h"
#include "nivel.h"
#include "reglas.h"
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class QTimer;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    void restablecerJuego();

    ~MainWindow();

public slots:
    //void inicalizarTimer();
private slots:
    void on_pushButtonDatos_clicked();

    void on_pushButtonAceptar_clicked();

    void on_pushButtonDenegar_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    bool band = false;
    bool entrada = false;
    Contenedora* frontera;
    Juego* juego;
    Nivel* nivelJuego;
    int nivelEntero;

};
#endif // MAINWINDOW_H
