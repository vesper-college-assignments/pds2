#ifndef LAB05_01
#define LAB05_01

#include <string>
#include "forma2d.h"

using namespace std;

class Triangulo: public Forma2D {

protected:
    string _cor;
    string _nome;
    double _a1;
    double _a2;
    double _a3;

public:
    Triangulo(string cor, double a1, double a2, double a3);

    string get_cor();
    string get_nome();

    double get_area();
    double get_perimetro();
};

#endif
