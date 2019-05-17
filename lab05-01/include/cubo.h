#ifndef LAB05_01_CUBO
#define LAB05_01_CUBO

#include <string>
#include "forma3d.h"

using namespace std;

class Cubo: public Forma3D {

protected:
    string _cor;
    string _nome;
    double _aresta;

public:
    Cubo(string cor, double aresta);

    string get_cor();
    string get_nome();

    double get_volume();

};

#endif
