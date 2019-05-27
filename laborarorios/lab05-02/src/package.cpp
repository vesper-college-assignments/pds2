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
    return this->peso * this->custo;
}

unsigned int Package::get_peso(){
    return this->peso;
}

unsigned int Package::get_custo_por_quilo(){
    return this->custo;
}

string Package::get_nome(){
    return this->nome;
}