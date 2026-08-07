#include <iostream>
using namespace std;

class Shop
{
public:
    void discount(float amount, float rate)
    {
        cout << "Regular Customer Discount = " << amount * rate / 100 << endl;
    }

    void discount(float amount, float rate, int rewardPoints)
    {
        float dis = amount * rate / 100 + rewardPoints;
        cout << "Premium Customer Discount = " << dis << endl;
    }

    void discount(double amount, double rate, double festivalRate)
    {
        double dis = amount * (rate + festivalRate) / 100;
        cout << "Festival Discount = " << dis << endl;
    }
};

int main()
{
    Shop s;

    s.discount(1000.0f, 10.0f);
    s.discount(1000.0f, 10.0f, 100);
    s.discount(1000.0, 10.0, 5.0);

    return 0;
}
