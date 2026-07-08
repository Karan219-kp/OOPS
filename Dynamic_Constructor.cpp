#include <iostream>
using namespace std;

class Number
{
private:
    int *p;

public:
    Number(int x)
    {
        p = new int;
        *p = x;
    }

    void display()
    {
        cout << "Value = " << *p << endl;
    }
};

int main()
{
    Number n(50);
    n.display();

    return 0;
}
