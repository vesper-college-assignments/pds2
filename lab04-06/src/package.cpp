#include "package.h"
#include <string>

using namespace std;

Package(string nome, string endereco, unsigned int peso, unsigned int custo){
    this->nome = nome;
    this->endereco = endereço;
    this->peso = peso;
    this->custo = custo;
}

double Package::calculate_cost(){
    return this->peso * this->custo;
}