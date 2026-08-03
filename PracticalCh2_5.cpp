#include <iostream>
using namespace std;

class FoodOrder
{
public:
    virtual void calculateBill() = 0;
};

class PizzaOrder : public FoodOrder
{
private:
    int qty;
    float price;

public:
    PizzaOrder()
    {
        price = 250;
    }

    void calculateBill()
    {
        cout << "Enter Pizza Quantity: ";
        cin >> qty;

        cout << "Pizza Bill = " << qty * price << endl;
    }
};

class BurgerOrder : public FoodOrder
{
private:
    int qty;
    float price;

public:
    BurgerOrder()
    {
        price = 120;
    }

    void calculateBill()
    {
        cout << "Enter Burger Quantity: ";
        cin >> qty;

        cout << "Burger Bill = " << qty * price << endl;
    }
};

int main()
{
    PizzaOrder p;
    BurgerOrder b;

    p.calculateBill();
    b.calculateBill();

    return 0;
}
