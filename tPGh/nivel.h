#ifndef NIVEL_H
#define NIVEL_H

class Nivel //Determina cuantos atributos setear en la ventana modal
{
public:
    Nivel();
    void incrementarNivel();
    void detectarNivelActual(int);
    int getNivelActual();

private:
    int nivelActual = 1;
};

#endif // NIVEL_H
