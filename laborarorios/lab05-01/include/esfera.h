#ifndef LAB05_01_ESFERA
#define LAB05_01_ESFERA

#include <string>
#include "forma3d.h"

using namespace std;

class Esfera: public Forma3D {

protected:
    string _cor;
    string _nome;
    double _raio;

public:
    Esfera(string cor, double raio);

    string get_cor();
    string get_nome();

    double get_volume();

};

#endif
