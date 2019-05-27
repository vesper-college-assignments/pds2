#ifndef LAB05_01_FORMA3D
#define LAB05_01_FORMA3D

#include <iostream>
#include "forma.h"

using namespace std;

class Forma3D: public Forma{

public:
    virtual double get_volume() = 0;
};


#endif
