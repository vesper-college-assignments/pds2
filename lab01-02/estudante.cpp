#include <string>
#include "estudante.h"

float Estudante::calcular_rsg() {
    float count = 0;
    for (int i = 0; i<5; i++){
        count += notas[i];
    }
    return count/5;
}


