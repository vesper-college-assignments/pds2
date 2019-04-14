#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H


class Aquecedor{
private:
    double temperatura;
    double temperatura_minima;
    double temperatura_maxima;
    double fator;
public:
    Aquecedor(){
        fator = 5.0;
        temperatura = 20.0;
        temperatura_minima = 10.0;
        temperatura_maxima = 40.0;
    };
    Aquecedor(double temp_inicial){
        temperatura = temp_inicial;
    };
    Aquecedor(double temp_inicial, double fat){
        temperatura = temp_inicial;
        fator = fat;
    };

    void aquecer();
    void resfriar();
    double get_temperatura();
    void set_fator(double fat);
};

#endif