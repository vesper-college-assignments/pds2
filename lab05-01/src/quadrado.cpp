#include "quadrado.h"
#include <string>

using namespace std;

Quadrado::Quadrado(string cor, double lado):
    _cor(cor),
    _nome("quadrado"),
    _lado(lado)
{}

string Quadrado::get_cor(){
    return this->_cor;
}

string Quadrado::get_nome(){
    return this->_nome;
}

double Quadrado::get_area(){
    return (this->_lado*this->_lado);
}

double Quadrado::get_perimetro(){
    return (this->_lado*4);
}
