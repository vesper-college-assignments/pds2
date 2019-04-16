#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include "package.h"
#include <string>

using namespace std;

class TwoDayPackage: public Package{
private:
    float taxa;
public:
    TwoDayPackage(unsigned int _peso, unsigned int _custo, float _taxa, string _nome, string _endereco);
    virtual unsigned int calculate_cost();
};


#endif
