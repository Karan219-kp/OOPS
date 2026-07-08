#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    // Constructor
    BankAccount()
    {
        balance = 0;
    }

    // Deposit function
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Withdraw function
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Show balance function
    void showBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.deposit(5000);
    account.withdraw(1500);
    account.showBalance();

    return 0;
}
