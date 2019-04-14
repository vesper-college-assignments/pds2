
#include "aquecedor.h"

using namespace std;

void Aquecedor::aquecer(){

     this->temperatura+=5.0;
}

void Aquecedor::resfriar(){
     this->temperatura-=5.0;
}
double Aquecedor::get_temperatura(){
    return this->temperatura;
}