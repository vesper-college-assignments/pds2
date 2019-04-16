#include "package.h"
#include <string>

using namespace std;

class OvernightPackage: public Package{
private:
    float taxa_adicional;
public:
    OvernightPackage(float taxa){
        this->taxa_adicional = taxa;
    };
    double calculate_cost();
};