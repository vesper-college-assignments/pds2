#ifndef LAB05_01_QUADRADO
#define LAB05_01_QUADRADO

#include <string>
#include "forma2d.h"

using namespace std;

class Quadrado: public Forma2D {

protected:
    string _cor;
    string _nome;
    double _lado;

public:
    Quadrado(string nome, double lado);

    string get_cor();
    string get_nome();

    double get_area();
    double get_perimetro();

};

#endif
