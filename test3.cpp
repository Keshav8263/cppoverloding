#include <iostream>
using namespace std;

class Display
{
public:
    Display(int a)
    {
        cout << "Integer: " << a << endl;
    }

    Display(double b)
    {
        cout << "Double: " << b << endl;
    }

    Display(string c)
    {
        cout << "String: " << c << endl;
    }
};

int main()
{
    Display d1(10);
    Display d2(15.1546890);
    Display d3("uddhav");

    return 0;
}