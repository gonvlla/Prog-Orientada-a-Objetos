#include "reglas.h"
#include "ui_reglas.h"

REGLAS::REGLAS(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::REGLAS)
{
    ui->setupUi(this);
    setWindowTitle("REGLAS DEL JUEGO");
}

REGLAS::~REGLAS()
{
    delete ui;
}

void REGLAS::on_pushButton_clicked()
{
    accept();
}

