//
// Created by valer on 14/04/2019.
//

#include <iostream>
#include "data.h"
int main(){
    Data data = Data(30, 9, 1985);
    cout << data.get_dia() << endl;
    cout << data.get_mes()<< endl;
    cout << data.get_ano() << endl;
    cout << data.get_data_curto() << endl;

    Data data2 = Data(22, 02, 2002);
    cout << data2.get_data_curto() << endl;

    Data data3 = Data(12, 1, 2014);
    cout << data3.get_data_longo() << endl;


    return 0;
}