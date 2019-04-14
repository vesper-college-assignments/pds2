//
// Created by valer on 14/04/2019.
//
#include <iostream>
#include <map>

using namespace std;


class Data{
private:
    int _dia;
    int _mes;
    int _ano;
public:
    Data(int dia, int mes, int ano){
        _dia = dia;
        _mes = mes;
        _ano = ano;
    }


    int get_dia(){
        return this->_dia;
    }

    string get_data_curto(){
        string data_curto = to_string(this->_dia) + "/"
                     + to_string(this->_mes) + "/"
                     + to_string(this->_ano);
        return data_curto;
    }

};


int main(){

    Data data = Data(14, 04, 2019);
    cout << data.get_dia() << endl;
    cout << data.get_data_curto() << endl;



    return 0;
}

