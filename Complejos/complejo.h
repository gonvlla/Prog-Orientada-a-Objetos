#ifndef COMPLEJO_H
#define COMPLEJO_H


class Complejo
{
public:
    Complejo(int,int);

    Complejo sumaComplejos(Complejo);

    Complejo restaComplejos(Complejo);

    Complejo multiplicacionComplejo(Complejo);

    void dividirComplejo(Complejo);

    float getParteReal() const;

    float getParteImaginaria() const;

    void setParteReal(int);

    void setParteImaginaria(int);

private:
    float parteReal;
    float parteImaginaria;
};

#endif // COMPLEJO_H
