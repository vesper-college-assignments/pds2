#include "savings.h"

double SavingsAccount::annual_savings_rate = 1.0;


SavingsAccount::SavingsAccount(double balance){
    this->savings_balance = balance;
}


double SavingsAccount::calculate_monthly_interest(){
    return this->savings_balance * this->annual_savings_rate/12;
}

static void SavingsAccount::modify_interest_rate(double interest){
    SavingsAccount::annual_savings_rate = annual_savings_rate;
}

static double SavingsAccount::calculate_monthly_balance(){
    //Por fim, a função-membro static calculate_monthly_balance deve calcular o balanço atual da conta ao final do mês,
    //somando os juros mensais e a quantia que os correntistas possuem atualmente em conta.
       return this-> savings_balance += this->calculate_monthly_interest()
}

float SavingsAccount::get_savings_balance(){
    return this->savings_balance;
}


float SavingsAccount::calculate_monthly_balance(){
    return get_savings_balance() + calculate_monthly_interest();
}