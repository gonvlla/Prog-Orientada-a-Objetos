#ifndef DIALOG_H
#define DIALOG_H
#define _GLIBCXX_USE_CXX11_ABI 0
#include <QDialog>
#include "persona.h"
#include "Contenedora.h"
#include <QString>
#include "nivel.h"


namespace Ui {
class Dialog;
}
class persona;
class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

public slots:
    void cargarPersona(Persona *actual);
private slots:
    void on_aceptarVista_clicked();

    void on_aceptarDatos_clicked();

private:
    Ui::Dialog *ui;
    Persona* persona;
    Nivel nivAct;

};

#endif // DIALOG_H
