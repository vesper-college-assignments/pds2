#ifndef LAB05_01
#define LAB05_01

#include <iostream>
#include "forma.h"
using namespace std;

class Forma3d: public Forma{

public:
    virtual double get_volume() = 0;

private:
    double altura;
    double largura;
    double profundidade;
};


#endif