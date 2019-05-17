#ifndef LAB05_01_CIRCULO
#define LAB05_01_CIRCULO

#include <string>
#include "forma2d.h"

using namespace std;

class Circulo: public Forma2D {

protected:
    string _cor;
    string _nome;
    double _raio;

public:
    Circulo(string cor, double raio);

    string get_cor();
    string get_nome();

    double get_area();
    double get_perimetro();

};

#endif
