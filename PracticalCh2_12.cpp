#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    Time(int totalMinutes)
    {
        hours = totalMinutes / 60;
        minutes = totalMinutes % 60;
    }

    void display()
    {
        cout << hours << " Hours " << minutes << " Minutes" << endl;
    }
};

int main()
{
    Time t = 130;

    t.display();

    return 0;
}
