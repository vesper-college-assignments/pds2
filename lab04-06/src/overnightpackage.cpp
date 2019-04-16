#include "overnightpackage.h"
#include <string>

using namespace std;



double OvernightPackage::calculate_cost(){
    double taxa = this->taxa_adicional + this->custo;
    return this->peso * taxa;
}