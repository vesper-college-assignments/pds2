#include <iostream>
#include <cmath>
using namespace std;

struct Circunferencia{

    //Attributes
    double _xc;
    double _yc;
    double _raio;
    double _PI = 3.14;
    //Methods
    Circunferencia(double xc, double yc, double raio){
        _xc = xc;
        _yc = yc;
        _raio = raio;
    }
    double calcular_area(){
        return _PI * pow(_raio,2);
    }

    bool possui_intersecao(Circunferencia  &c){
        //retorna se há ou não intersecção entre duas circ.
        //take distance between two center
        //double dist = sqrt((x1-x2)^2 + (y1-y2)^2 )

        double dist = sqrt ( pow(_xc-c._xc, 2) + pow(_yc-c._yc, 2));
        if (dist > (_raio + c._raio)){
            return false;
        }
        else{
            return true;
        }
    }
};


















//int main (){
//    //relembrar a coisa do .h e .cpp
//
//    int x = 10;
//    int *point = &x;
//
//    cout << point << endl;  // Imprime o endereço de X (que é o conteúdo de pointer)
//    cout << &point << endl; //imprime o endereço de point
//    cout << *point << endl; //imprime o conteúdo da variável apontada por point
//
//    return 0;
//}
