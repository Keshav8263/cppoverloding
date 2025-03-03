#include <iostream>
using namespace std;
 
class shape
{

public:
    shape(int length)
    {
        int area = length * length;
        cout << "Area: " << area << endl;
    }

    shape(double len, double wid)
    {
        double lengths = len;
        double width = wid;
        cout << "Length: " << lengths << ", Width: " << width << endl;
    }

    shape(float radius)
    {
        float area = 3.14 * radius * radius;
        cout << "Area: " << area << endl;
    }
};

int main()
{
    shape s1(20);
    shape s2(13.1235, 15.0345);
    shape s3(10.0f);
    return 0;
}