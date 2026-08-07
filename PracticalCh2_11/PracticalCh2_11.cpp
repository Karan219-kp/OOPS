#include <iostream>
using namespace std;

class Distance
{
    int metre, centimetre;

public:
    Distance(int m = 0, int c = 0)
    {
        metre = m;
        centimetre = c;
    }

    friend Distance operator+(Distance, Distance);

    void display()
    {
        cout << metre << " metre " << centimetre << " centimetre" << endl;
    }
};

Distance operator+(Distance d1, Distance d2)
{
    Distance temp;

    temp.metre = d1.metre + d2.metre;
    temp.centimetre = d1.centimetre + d2.centimetre;

    if (temp.centimetre >= 100)
    {
        temp.metre++;
        temp.centimetre -= 100;
    }

    return temp;
}

int main()
{
    Distance d1(5, 60), d2(3, 70);

    Distance d3 = d1 + d2;

    d3.display();

    return 0;
}
