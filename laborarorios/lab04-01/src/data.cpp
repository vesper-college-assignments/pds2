//Crie uma classe Data com três atributos inteiros: dia, mês e ano.
// Faça um construtor que inicializa as três variáveis e suponha que os valores passados serão corretos.
//
// A classe deve possuir um método para
// exibir a data em formato de números separados por barra: dia/mes/ano e
// outro método para exibir a data por extenso (ex: 12 de janeiro de 2015).

#include <iostream>
#include <map>
#include "data.h"
#include <string>

using namespace std;
int Data::get_dia(){
    return this->_dia;
}

int Data::get_mes(){
    return this->_mes;
}

int Data::get_ano(){
    return this->_ano;
}

string Data::get_data_curto(){
    return to_string(this->_dia) + "/"
         + to_string(this->_mes) + "/"
         + to_string(this->_ano);
}

string Data::get_data_longo(){
    map<int,string> map_mes;

    map_mes[1]="janeiro";
    map_mes[2]="fevereiro";
    map_mes[3]="março";
    map_mes[4]="abril";
    map_mes[5]="maio";
    map_mes[5]="junho";
    map_mes[5]="julho";
    map_mes[5]="agosto";
    map_mes[5]="setembro";
    map_mes[5]="outubro";
    map_mes[5]="novembro";
    map_mes[5]="dezembro";

    return to_string(this->_dia) + " de "
    + map_mes.find(this->_mes)->second + " de "
    + to_string(this->_ano);
}
