#include <string>
#include "cubo.h"

using namespace std;

Cubo::Cubo(string cor, double aresta):
    _cor(cor),
    _nome("cubo"),
    _aresta(aresta)
{}

string Cubo::get_cor(){
    return this->_cor;
}

string Cubo::get_nome(){
    return this->_nome;
}

double Cubo::get_volume(){
    return (this->_aresta * this->_aresta * this->_aresta);
}