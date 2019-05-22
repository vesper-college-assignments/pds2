#include "twodaypackage.h"
#include <string>
#include <iostream>
using namespace std;

TwoDayPackage::TwoDayPackage(unsigned int _peso, unsigned int _custo, float _taxa, string _nome, string _endereco):
        Package(_peso, _custo, _nome, _endereco),
        taxa(_taxa)
{}

unsigned int TwoDayPackage::calculate_cost(){
    cout << "função overriden"<<endl;
    return this->peso*this->custo + this-> taxa;
}