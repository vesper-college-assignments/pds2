#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H

#include "package.h"
#include <string>

using namespace std;

class OverNightPackage: public Package{
private:
    float taxa_adicional;
public:
    OverNightPackage(unsigned int _peso, unsigned int _custo, float taxa, string _nome, string _endereco);
    virtual unsigned int calculate_cost();
};


#endif