#include <iostream>
using namespace std;

class BankAccount
{
protected:
    float balance;

public:
    void getBalance()
    {
        cout << "Enter Balance: ";
        cin >> balance;
    }
};

class SavingsAccount : public BankAccount
{
private:
    float rate;

public:
    void getRate()
    {
        getBalance();

        cout << "Enter Interest Rate (%): ";
        cin >> rate;
    }

    void addInterest()
    {
        float interest = balance * rate / 100;
        balance += interest;

        cout << "Interest: " << interest << endl;
        cout << "Updated Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount s;

    s.getRate();
    s.addInterest();

    return 0;
}
