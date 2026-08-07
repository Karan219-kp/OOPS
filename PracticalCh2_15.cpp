#include <iostream>
using namespace std;

class Payment
{
public:
    virtual void display(float amount)
    {
        cout << "Payment Amount = " << amount << endl;
    }
};

class CashPayment : public Payment
{
public:
    void display(float amount)
    {
        cout << "Cash Payment\n";
        cout << "Final Amount = " << amount << endl;
    }
};

class CardPayment : public Payment
{
public:
    void display(float amount)
    {
        cout << "Card Payment\n";
        cout << "Final Amount = " << amount + 20 << endl;
    }
};

class UPIPayment : public Payment
{
public:
    void display(float amount)
    {
        cout << "UPI Payment\n";
        cout << "Final Amount = " << amount << endl;
    }
};

int main()
{
    Payment *p;

    CashPayment c;
    CardPayment card;
    UPIPayment upi;

    p = &c;
    p->display(1000);

    p = &card;
    p->display(1000);

    p = &upi;
    p->display(1000);

    return 0;
}
