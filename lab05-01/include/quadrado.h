#ifndef LAB05_01_QUADRADO
#define LAB05_01_QUADRADO

#include <iostream>
#include "forma.h"
#include "forma2d.h"

using namespace std;

class Quadrado: public Forma2d {

public:
    Quadrado();
    double get_area();
    double get_perimetro();

};

#endif
