#include <iostream>
using namespace std;

class Address
{
private:
    string city, state;
    int pin;

public:
    void getAddress()
    {
        cout << "Enter City: ";
        cin >> city;

        cout << "Enter State: ";
        cin >> state;

        cout << "Enter Pin Code: ";
        cin >> pin;
    }

    void showAddress()
    {
        cout << "City: " << city << endl;
        cout << "State: " << state << endl;
        cout << "Pin Code: " << pin << endl;
    }
};

class Customer
{
private:
    int id;
    string name;
    Address address;

public:
    void getCustomer()
    {
        cout << "Enter Customer ID: ";
        cin >> id;

        cout << "Enter Customer Name: ";
        cin >> name;

        address.getAddress();
    }

    void showCustomer()
    {
        cout << "\nCustomer Details\n";
        cout << "Customer ID: " << id << endl;
        cout << "Customer Name: " << name << endl;

        address.showAddress();
    }
};

int main()
{
    Customer c;

    c.getCustomer();
    c.showCustomer();

    return 0;
}
