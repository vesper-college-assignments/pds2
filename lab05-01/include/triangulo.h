#ifndef LAB05_01
#define LAB05_01

#include <iostream>
#include "forma.h"
#include "forma2d.h"
using namespace std;

class Triangulo: public Forma2d {

public:
    double get_area();
};

#endif
