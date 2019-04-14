#ifndef PDS2_VPL_RECT_H
#define PDS2_VPL_RECT_H

//Forneça funções-membro que calculam os atributos perimeter e área do retângulo.
//Além disso, forneça as funções set e get para os atributos height e width.
// As funções set devem verificar se height e width são números de ponto flutuante maiores que 0,0 e menores que 20,0.

class Rectangle { ;
private:
    double height;
    double width;
public:
    Rectangle() {
        height = 1.0;
        width = 1.0;
    };

    Rectangle(double w, double h){
        height = h;
        width = w;
    };

    double get_height();
    double get_width();
    void set_height(double h);
    void set_width(double w);
    double get_area();
    double get_perimeter();

};

#endif