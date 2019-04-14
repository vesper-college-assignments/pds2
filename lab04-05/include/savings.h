
class SavingsAccount{
private:
    double savings_balance;
    static double annual_savings_rate;
public:

    SavingsAccount(double balance){
        annual_savings_rate = 1.0;
        savings_balance = balance;
    };
    void calculate_monthly_interest();
    static void modify_interest_rate();
    static double calculate_monthly_balance();
};