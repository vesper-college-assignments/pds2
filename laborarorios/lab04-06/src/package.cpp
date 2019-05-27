#include "package.h"
#include <string>
#include <iostream>
using namespace std;

Package::Package(unsigned int _peso, unsigned int _custo, string _nome, string _endereco):
    nome(_nome),
    endereco(_endereco),
    peso(_peso),
    custo(_custo)
{}

unsigned int Package::calculate_cost(){
    cout << "funcao original" <<endl;
    return this->peso * this->custo;
}

unsigned int Package::get_peso(){
    cout << "funcao original" <<endl;
    return this->peso;
}

unsigned int Package::get_custo_por_quilo(){
    return this->custo;
}