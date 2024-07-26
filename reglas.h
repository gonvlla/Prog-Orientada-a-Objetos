#ifndef REGLAS_H
#define REGLAS_H

#include <QDialog>

namespace Ui {
class REGLAS;
}

class REGLAS : public QDialog
{
    Q_OBJECT

public:
    explicit REGLAS(QWidget *parent = nullptr);
    ~REGLAS();

private slots:
    void on_pushButton_clicked();

private:
    Ui::REGLAS *ui;
};

#endif // REGLAS_H
