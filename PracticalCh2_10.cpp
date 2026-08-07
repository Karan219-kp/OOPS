#include <iostream>
using namespace std;

class ShoppingCart
{
    float amount;

public:
    ShoppingCart(float a = 0)
    {
        amount = a;
    }

    ShoppingCart operator+(ShoppingCart obj)
    {
        return ShoppingCart(amount + obj.amount);
    }

    void display()
    {
        cout << "Total Bill = " << amount << endl;
    }
};

int main()
{
    ShoppingCart c1(1500), c2(2500);

    ShoppingCart c3 = c1 + c2;

    c3.display();

    return 0;
}
