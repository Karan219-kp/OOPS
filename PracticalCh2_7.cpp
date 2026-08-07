#include <iostream>
using namespace std;

class Fare
{
public:
    void calculateFare(float distance, float rate)
    {
        cout << "Bus Fare = " << distance * rate << endl;
    }

    void calculateFare(float distance, float rate, float bookingCharge)
    {
        cout << "Taxi Fare = " << (distance * rate + bookingCharge) << endl;
    }

    void calculateFare(int passengers, float farePerPassenger)
    {
        cout << "Group Fare = " << passengers * farePerPassenger << endl;
    }
};

int main()
{
    Fare f;

    f.calculateFare(20.0, 5.0);
    f.calculateFare(20.0, 8.0, 50.0);
    f.calculateFare(5, 100.0);

    return 0;
}
