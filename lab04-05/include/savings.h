#ifndef PDS2_SAVINGS_H
#define PDS2_SAVINGS_H

class SavingsAccount{
private:
    double savings_balance;

public:
    static double annual_savings_rate;
    SavingsAccount(double balance);
    float calculate_monthly_interest();
    float get_savings_balance();
    static void modify_interest_rate();
    double calculate_monthly_balance();
};


#endif