#include "circulo.h"
#include <cmath>

using namespace std;

Circulo::Circulo(string cor, double raio):
    _cor(cor),
    _nome("circulo"),
    _raio(raio)
{}

string Circulo::get_cor(){
    return this->_cor;
}

string Circulo::get_nome(){
    return this->_nome;
}

double Circulo::get_area(){
    return (M_PI * this->_raio * this->_raio);
}

double Circulo::get_perimetro(){
    return (2 * M_PI * this->_raio);
}
