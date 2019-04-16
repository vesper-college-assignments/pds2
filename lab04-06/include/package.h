#include <string>
using namespace std;

class Package{
private:
    string nome;
    string endereco;
public:
    unsigned int peso;
    unsigned int custo;
    Package(string nome, string endereco, unsigned int peso, unsigned int custo);
    double calculate_cost();
};