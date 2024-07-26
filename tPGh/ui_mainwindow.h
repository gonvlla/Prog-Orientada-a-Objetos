/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *labelCantPuntos;
    QLabel *labelMultasTt;
    QLabel *labelNivel;
    QPushButton *pushButtonDenegar;
    QPushButton *pushButtonAceptar;
    QPushButton *pushButtonDatos;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(757, 506);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget#centralwidget {\n"
"    background-image: url(:/imagenes/Imagenes/Fondo.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover;\n"
"}"));
        labelCantPuntos = new QLabel(centralwidget);
        labelCantPuntos->setObjectName("labelCantPuntos");
        labelCantPuntos->setGeometry(QRect(670, 150, 81, 41));
        labelCantPuntos->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";"));
        labelMultasTt = new QLabel(centralwidget);
        labelMultasTt->setObjectName("labelMultasTt");
        labelMultasTt->setGeometry(QRect(670, 260, 81, 41));
        labelMultasTt->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";"));
        labelNivel = new QLabel(centralwidget);
        labelNivel->setObjectName("labelNivel");
        labelNivel->setGeometry(QRect(430, 20, 61, 41));
        labelNivel->setStyleSheet(QString::fromUtf8("font: 700 20pt \"Segoe UI\";"));
        pushButtonDenegar = new QPushButton(centralwidget);
        pushButtonDenegar->setObjectName("pushButtonDenegar");
        pushButtonDenegar->setGeometry(QRect(490, 130, 80, 24));
        pushButtonDenegar->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(255, 255, 255, 0); border: none; }"));
        pushButtonAceptar = new QPushButton(centralwidget);
        pushButtonAceptar->setObjectName("pushButtonAceptar");
        pushButtonAceptar->setGeometry(QRect(390, 130, 81, 31));
        pushButtonAceptar->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(255, 255, 255, 0); border: none; }"));
        pushButtonDatos = new QPushButton(centralwidget);
        pushButtonDatos->setObjectName("pushButtonDatos");
        pushButtonDatos->setGeometry(QRect(320, 400, 131, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(0, 420, 111, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(255, 255, 255, 0); border: none; }\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 757, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelCantPuntos->setText(QCoreApplication::translate("MainWindow", "Puntos", nullptr));
        labelMultasTt->setText(QCoreApplication::translate("MainWindow", "Multas", nullptr));
        labelNivel->setText(QCoreApplication::translate("MainWindow", "NIVEL", nullptr));
        pushButtonDenegar->setText(QString());
        pushButtonAceptar->setText(QString());
        pushButtonDatos->setText(QCoreApplication::translate("MainWindow", "Revisar Documentos", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
