// Altere os métodos existentes na classe de forma apropriada com o objetivo de manter o estado do objeto
//        sempre válido
//        (ex: o fator de incremento deve ser usado toda vez que os métodos aquecer e resfriar
//        forem chamados). Escreva mensagens na saída padrão quando uma ação não puder ser executada por
//        não ser um estado de objeto válido.
//Por fim, crie um método que permita alterar o fator de incremento da temperatura depois de um objeto
//        já ter sido criado.

#include "aquecedor.h"
#include <iostream>

using namespace std;

void Aquecedor::aquecer(){
    double temp = this->temperatura;
    if (temp + this->fator <= this->temperatura_maxima)
        this->temperatura+=this->fator;
    else
        cout << "Ação inválida. Temperatura final maior do que o permitido"<< endl;
}

void Aquecedor::resfriar(){
    double temp = this->temperatura;
    if ( (temp - this->fator) >= this->temperatura_minima)
        this->temperatura-=this->fator;
    else
        cout << "Ação inválida. Temperatura final menor do que o permitido"<< endl;
}

double Aquecedor::get_temperatura(){
    return this->temperatura;
}

void Aquecedor::set_fator(double fat){
    this->fator = fat;
}