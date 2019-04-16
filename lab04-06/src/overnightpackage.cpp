#include "overnightpackage.h"
#include <string>

using namespace std;


OverNightPackage::OverNightPackage(unsigned int _peso, unsigned int _custo, float taxa, string _nome, string _endereco):
        Package(_peso, _custo, _nome, _endereco),
        taxa_adicional(taxa)
{}

unsigned int OverNightPackage::calculate_cost(){
    double taxa = this->taxa_adicional + this->custo;
    return this->peso * taxa;
}