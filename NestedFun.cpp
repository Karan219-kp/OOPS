#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    void getNumber()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkOddEven()
    {
        if (num % 2 == 0)
            cout << num << " is Even." << endl;
        else
            cout << num << " is Odd." << endl;

        checkPositiveNegative();   // Nested member function call
    }

    void checkPositiveNegative()
    {
        if (num > 0)
            cout << num << " is Positive." << endl;
        else if (num < 0)
            cout << num << " is Negative." << endl;
        else
            cout << "The number is Zero." << endl;
    }
};

int main()
{
    Number n;

    n.getNumber();
    n.checkOddEven();

    return 0;
}
