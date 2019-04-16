#include "package.h"
#include <string>

using namespace std;

class TwoDayPackage: public Package{
private:
    float taxa;
public:
    TwoDayPackage(float taxa);
    double calculate_cost();
};