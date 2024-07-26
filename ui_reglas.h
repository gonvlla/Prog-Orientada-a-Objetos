/********************************************************************************
** Form generated from reading UI file 'reglas.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGLAS_H
#define UI_REGLAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_REGLAS
{
public:
    QPushButton *pushButton;

    void setupUi(QDialog *REGLAS)
    {
        if (REGLAS->objectName().isEmpty())
            REGLAS->setObjectName("REGLAS");
        REGLAS->resize(758, 470);
        REGLAS->setStyleSheet(QString::fromUtf8("QDialog#REGLAS {\n"
"    background-image: url(:/imagenes/Imagenes/Reglas.png);\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    background-size: cover;\n"
"}"));
        pushButton = new QPushButton(REGLAS);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 423, 80, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton { background-color: rgba(255, 255, 255, 0); border: none; }\n"
""));

        retranslateUi(REGLAS);

        QMetaObject::connectSlotsByName(REGLAS);
    } // setupUi

    void retranslateUi(QDialog *REGLAS)
    {
        REGLAS->setWindowTitle(QCoreApplication::translate("REGLAS", "Dialog", nullptr));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class REGLAS: public Ui_REGLAS {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGLAS_H
