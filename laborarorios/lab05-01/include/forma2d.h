#ifndef LAB05_01_FORMA2D
#define LAB05_01_FORMA2D

#include <iostream>
#include "forma.h"

using namespace std;

class Forma2D: public Forma{

public:
    virtual double get_area() = 0;
    virtual double get_perimetro() = 0;
};

#endif
