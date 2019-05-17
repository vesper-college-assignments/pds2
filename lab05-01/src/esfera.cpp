#include <string>
#include <cmath>
#include "esfera.h"

using namespace std;

Esfera::Esfera(string cor, double raio):
        _cor(cor),
        _nome("esfera"),
        _raio(raio)
{}

string Esfera::get_cor(){
    return this->_cor;
}

string Esfera::get_nome(){
    return this->_nome;
}

double Esfera::get_volume(){
    return (4*M_PI*pow(this->_raio, 3))/3;
}