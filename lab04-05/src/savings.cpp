#include "savings.h"

double SavingsAccount::calculate_monthly_interest(){
    // Forneça a função-membro calculate_monthly_interest que calcula os juros mensais
//        multiplicando o balance [saldo] pelo annual_savings_rate dividido por 12;
//        esses juros devem ser adicionados a savings_balance.

    return this->savings_balance * this->annual_savings_rate/12;


}

static void SavingsAccount::modify_interest_rate(double interest){
    //Forneça uma função-membro static modify_interest_rate
    // que configura o static annual_savings_rate com um novo valor.
    this-> annual_savings_rate = interest
}

static double SavingsAccount::calculate_monthly_balance(){
    //Por fim, a função-membro static calculate_monthly_balance deve calcular o balanço atual da conta ao final do mês,
    //somando os juros mensais e a quantia que os correntistas possuem atualmente em conta.
       return this-> savings_balance += this->calculate_monthly_interest()
}