#include <iostream>
using namespace std;

class MovieTicket
{
    string name;
    int seatNo;
    float price;

public:
    void setData(string name, int seatNo, float price)
    {
        this->name = name;
        this->seatNo = seatNo;
        this->price = price;
    }

    void display()
    {
        cout << "Customer Name : " << name << endl;
        cout << "Seat Number   : " << seatNo << endl;
        cout << "Ticket Price  : " << price << endl;
    }
};

int main()
{
    MovieTicket m;

    MovieTicket *ptr = &m;

    ptr->setData("Rahul", 12, 250);

    ptr->display();

    return 0;
}
