#include <iostream>
using namespace std;
 class BankAccount{
    protected:
       double balance;
    public:
       void setbalance(double b){
        balance = b;
       }
 };
 class SavingAccount : public BankAccount{
    public:
      void showBalance(){
        cout << "Balance is: $" <<balance << endl;
      }
 };

int main(){
    SavingAccount acc;
    acc.setbalance(1000.50);
    acc.showBalance();
    return 0;
}