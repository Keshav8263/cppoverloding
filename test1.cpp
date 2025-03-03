#include <iostream>
using namespace std;

class sum
{ 
public:
    sum(int a, int b)
    {
        int sum = a + b;
        cout << sum << endl;
    }
    sum(int x, int y, int z)
    {
        int sum = x + y + z;
        cout << sum << endl;
    }
    sum(float k, float j)
    {
        float sum = k + j;
        cout << sum << endl;
    }
};

int main()
{
    sum sum1(5, 10);
    sum sum2(5, 5, 5);
    sum sum3(10.5f, 15.5f);
}