#ifndef PACKAGE_H
#define PACKAGE_H

#include <string>
using namespace std;

class Package{
protected:
    string nome;
    string endereco;
    unsigned int peso;
    unsigned int custo;

public:
    Package(unsigned int _peso, unsigned int _custo, string _nome, string _endereco);

    virtual unsigned int calculate_cost();
    unsigned int get_peso();
    unsigned int get_custo_por_quilo();
    string get_nome();
};

#endif