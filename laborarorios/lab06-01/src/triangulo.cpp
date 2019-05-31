#include <iostream>
#include "triangulo.h"
#include "excecoes.h"

//A classe deve possuir um construtor que recebe 3 parâmetros do tipo double (representando os lados).
//O construtor deve tratar casos excepcionais (i.e., triângulos inválidos), por exemplo, lados negativos
//ou zero e desigualdade triangular não atendida. Em todos esses possíveis casos de excepcionais,
//deve ser lançada uma exceção chamada "TrianguloInvalidoError", que deve ser subclasse de 'exception'.

using namespace std;

Triangulo::Triangulo(double x, double y, double z){
        if(x <= 0 || y<=0 || z<=0)
            throw TrianguloInvalidoException();

        if(x+y <= z || x+z <= y || y+z <= x)
            throw TrianguloInvalidoException();

        this->x = x;
        this->y = y;
        this->z = z;

}

Tipo Triangulo::determinar_tipo(){
    Tipo tipo;

    if (this->x == this->y) {
        if (this->y == this->z)
            tipo = EQUILATERO;
        else
            tipo = ISOSCELES;
    }
    else
        tipo = ESCALENO;

    return tipo;
}

