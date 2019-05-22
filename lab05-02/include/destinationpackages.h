#ifndef DESTINATION_PACKAGE_H
#define DESTINATION_PACKAGE_H

#include "package.h"
#include <string>
#include <map>
#include <vector>

using namespace std;

class DestinationPackages{

protected:
    map <string, vector<Package *>> packages;
    map <string, double> custo_por_usuario;
    double total;

public:
    DestinationPackages();
    void add_package(Package g);
    double custo_total();
    double custo_total(string nome);
};

#endif