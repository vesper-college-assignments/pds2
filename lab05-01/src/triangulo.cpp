#include "triangulo.h"
#include <string>
#include <cmath>

using namespace std;

Triangulo::Triangulo(string cor, double a1, double a2, double a3):
        _cor(cor),
        _nome("triangulo"),
        _a1(a1),
        _a2(a2),
        _a3(a3)
{}

string Triangulo::get_cor(){
    return this->_cor;
}

string Triangulo::get_nome(){
    return this->_nome;
}

double Triangulo::get_area(){
    double p = (this->get_perimetro()/2);
    return sqrt((p * (p - _a1) * (p - _a2) * (p - _a3)));
}

double Triangulo::get_perimetro(){
    return (this->_a1 + this->_a2 + this->_a3);
}
