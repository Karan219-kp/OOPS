#include <iostream>
using namespace std;

class ProductPrice
{
    float price;

public:
    ProductPrice(float p)
    {
        price = p;
    }

    operator float()
    {
        return price;
    }
};

int main()
{
    ProductPrice p(499.99);

    float amount = p;

    cout << "Price = " << amount << endl;

    return 0;
}
