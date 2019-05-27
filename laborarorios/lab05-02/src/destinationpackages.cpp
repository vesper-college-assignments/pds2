#include "package.h"
#include "destinationpackages.h"

using namespace std;

DestinationPackages::DestinationPackages(){
    this->total=0;
}

void DestinationPackages::add_package(Package g){
    string nome = g.get_nome();
//    this->packages[nome].push_back(&g);

    //atualizar totais
    this->total += g.calculate_cost();
    if(this->custo_por_usuario.find(nome) != this->custo_por_usuario.end())
        this->custo_por_usuario[nome]+= g.calculate_cost();
    else{
        this->custo_por_usuario[nome] = g.calculate_cost();
    }
}

double DestinationPackages::custo_total(){
    return this->total;
}

double DestinationPackages::custo_total(string nome){
    if (this->custo_por_usuario.find(nome) == this->custo_por_usuario.end())
        return 0;

    return this->custo_por_usuario[nome];

}