#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H

#include <string>

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
    int get_dia();
    int get_mes();
    int get_ano();
    string get_data_curto();
    string get_data_longo();
};


#endif