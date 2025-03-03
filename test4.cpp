#include <iostream>
using namespace std;

class multiplication
{

public:
    multiplication(int a, int b)
    {
        int c = a * b;
        cout << " Two int multiplication: " << c << endl;
    }
    multiplication(int a, int b, int c)
    {
        int d = a * b * c;
        cout << " Three int multiplication : " << d << endl;
    }
    multiplication(float a, float b)
    {
        float c = a * b;
        cout << " Two float multiplication: " << c << endl;
    }
};

int main()
{
    multiplication m1(5, 5);
    multiplication m2(5, 5, 5);
    multiplication m3(15.10f, 10.20f);

    return 0;
}