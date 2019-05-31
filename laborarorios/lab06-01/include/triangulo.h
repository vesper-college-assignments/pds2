#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "excecoes.h"



enum Tipo {EQUILATERO, ISOSCELES, ESCALENO};

class Triangulo {
private:
    double x;
    double y;
    double z;
public:
    Triangulo(double x, double y, double z);
    Tipo determinar_tipo();
};

#endif
