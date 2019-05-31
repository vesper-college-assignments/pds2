#include <iostream>
#include "triangulo.h"
#include "excecoes.h"

using namespace std;

int main() {

    Triangulo obj = Triangulo(1,0,3);
    Tipo result = obj.determinar_tipo();
    cout << result << endl;

    return 0;
}
