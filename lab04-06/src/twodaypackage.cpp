#include "twodaypackage.h"
#include <string>

using namespace std;

TwoDayPackage(float taxa){
    this->taxa = taxa;
}
double TwoDayPackage::calculate_cost(){
    return Package::calculate_cost()+ this->taxa;
}