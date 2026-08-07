#include <iostream>
using namespace std;

class Temperature
{
    int temp;

public:
    Temperature(int t)
    {
        temp = t;
    }

    void operator-()
    {
        temp = -temp;
    }

    void display()
    {
        cout << "Temperature = " << temp << endl;
    }
};

int main()
{
    Temperature t(25);

    t.display();

    -t;

    t.display();

    return 0;
}
