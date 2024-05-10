#ifndef FRACCIONES_H
#define FRACCIONES_H


class Fracciones
{
public:
    Fracciones(int); //Si el denominador es 1

    Fracciones(int,int);//Si recibe el denominador !=1

    void sumaFraccion(Fracciones);

    void restaFraccion(Fracciones);

    void simplificaFraccion(); //No reciben paramentros porque el objeto ya conoce su den/num

    void multiplicarFraccion(Fracciones);

    void dividirFracciones(Fracciones);

    int maximoComunDivisor(int,int);

    void setNumerador(int);

    void setDenominador(int);

    int getNumerador() const;

    int getDenominador() const;

    int getMcd() const;

    void setMcd(int);

private:
    int numerador;
    int denominador;
    int mcd;
};

#endif // FRACCIONES_H
