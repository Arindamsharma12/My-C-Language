#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }

    // constructor overloading
    complex(int x)
    {
        a = x;
        b = 0;
    }

    complex()
    {
        a = 0;
        b = 0;
    }
    void printData()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex c1(4, 6);
    c1.printData();

    complex c2(5);
    c2.printData();

    complex c3;
    c3.printData();
    return 0;
}