#ifndef LAB05_01_FORMA
#define LAB05_01_FORMA

#include <string>

using namespace std;

class Forma{

public:
    virtual string get_cor() = 0;
    virtual string get_nome() = 0;
};


#endif