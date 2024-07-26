/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *labelNac;
    QLabel *labelDia;
    QLabel *labelTipoVisita;
    QLabel *labelDuracionVis;
    QLabel *labelEstadoCivil;
    QLabel *labelEstadoVisa;
    QLabel *labelPaisRes;
    QLabel *labelEstaAcomp;
    QLabel *labelPropositoViaje;
    QLabel *labelRequiza;
    QLabel *labelAntecedentes;
    QLabel *labelVisasAnteriores;
    QPushButton *aceptarDatos;
    QLabel *label;
    QLabel *labelMes;
    QLabel *label_3;
    QLabel *labelAnio;
    QLabel *label_2;
    QLabel *labelMesanjeLlegada;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(758, 471);
        Dialog->setStyleSheet(QString::fromUtf8("QDialog#Dialog {\n"
"    background-image: url(:/imagenes/Imagenes/Pasaporte.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover;\n"
"}"));
        labelNac = new QLabel(Dialog);
        labelNac->setObjectName("labelNac");
        labelNac->setGeometry(QRect(610, 245, 101, 21));
        labelNac->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelDia = new QLabel(Dialog);
        labelDia->setObjectName("labelDia");
        labelDia->setGeometry(QRect(600, 270, 16, 41));
        labelDia->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelTipoVisita = new QLabel(Dialog);
        labelTipoVisita->setObjectName("labelTipoVisita");
        labelTipoVisita->setGeometry(QRect(410, 260, 91, 21));
        labelTipoVisita->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelDuracionVis = new QLabel(Dialog);
        labelDuracionVis->setObjectName("labelDuracionVis");
        labelDuracionVis->setGeometry(QRect(390, 290, 51, 31));
        labelDuracionVis->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelEstadoCivil = new QLabel(Dialog);
        labelEstadoCivil->setObjectName("labelEstadoCivil");
        labelEstadoCivil->setGeometry(QRect(560, 320, 131, 16));
        labelEstadoCivil->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelEstadoVisa = new QLabel(Dialog);
        labelEstadoVisa->setObjectName("labelEstadoVisa");
        labelEstadoVisa->setGeometry(QRect(560, 390, 91, 21));
        labelEstadoVisa->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelPaisRes = new QLabel(Dialog);
        labelPaisRes->setObjectName("labelPaisRes");
        labelPaisRes->setGeometry(QRect(600, 350, 101, 31));
        labelPaisRes->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelEstaAcomp = new QLabel(Dialog);
        labelEstaAcomp->setObjectName("labelEstaAcomp");
        labelEstaAcomp->setGeometry(QRect(420, 360, 80, 16));
        labelEstaAcomp->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelPropositoViaje = new QLabel(Dialog);
        labelPropositoViaje->setObjectName("labelPropositoViaje");
        labelPropositoViaje->setGeometry(QRect(390, 320, 81, 31));
        labelPropositoViaje->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelRequiza = new QLabel(Dialog);
        labelRequiza->setObjectName("labelRequiza");
        labelRequiza->setGeometry(QRect(380, 426, 71, 21));
        labelRequiza->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelAntecedentes = new QLabel(Dialog);
        labelAntecedentes->setObjectName("labelAntecedentes");
        labelAntecedentes->setGeometry(QRect(170, 250, 21, 21));
        labelAntecedentes->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelVisasAnteriores = new QLabel(Dialog);
        labelVisasAnteriores->setObjectName("labelVisasAnteriores");
        labelVisasAnteriores->setGeometry(QRect(410, 390, 91, 31));
        labelVisasAnteriores->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        aceptarDatos = new QPushButton(Dialog);
        aceptarDatos->setObjectName("aceptarDatos");
        aceptarDatos->setGeometry(QRect(8, 15, 141, 41));
        aceptarDatos->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(255, 255, 255, 0); border: none; }"));
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(620, 270, 16, 41));
        label->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelMes = new QLabel(Dialog);
        labelMes->setObjectName("labelMes");
        labelMes->setGeometry(QRect(630, 270, 16, 41));
        labelMes->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        label_3 = new QLabel(Dialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(650, 270, 16, 41));
        label_3->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelAnio = new QLabel(Dialog);
        labelAnio->setObjectName("labelAnio");
        labelAnio->setGeometry(QRect(660, 270, 41, 41));
        labelAnio->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        label_2 = new QLabel(Dialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(410, 285, 51, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 700 10pt \"Segoe UI\";"));
        labelMesanjeLlegada = new QLabel(Dialog);
        labelMesanjeLlegada->setObjectName("labelMesanjeLlegada");
        labelMesanjeLlegada->setGeometry(QRect(510, 10, 231, 41));
        labelMesanjeLlegada->setStyleSheet(QString::fromUtf8("font: 700 9pt \"Segoe UI\";"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        labelNac->setText(QString());
        labelDia->setText(QString());
        labelTipoVisita->setText(QString());
        labelDuracionVis->setText(QString());
        labelEstadoCivil->setText(QString());
        labelEstadoVisa->setText(QString());
        labelPaisRes->setText(QString());
        labelEstaAcomp->setText(QString());
        labelPropositoViaje->setText(QString());
        labelRequiza->setText(QCoreApplication::translate("Dialog", "Requiza", nullptr));
        labelAntecedentes->setText(QString());
        labelVisasAnteriores->setText(QString());
        aceptarDatos->setText(QString());
        label->setText(QCoreApplication::translate("Dialog", "/", nullptr));
        labelMes->setText(QString());
        label_3->setText(QCoreApplication::translate("Dialog", "/", nullptr));
        labelAnio->setText(QString());
        label_2->setText(QCoreApplication::translate("Dialog", "Meses", nullptr));
        labelMesanjeLlegada->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
