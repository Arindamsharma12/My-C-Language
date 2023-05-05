#include <iostream>
using namespace std;

class Simple
{
    int data1, data2, data3;

public:
    // Default arguments
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData()
    {
        cout << "The value of data 1, data 2, and data 3 is " << data1 << ", " << data2 << " and " << data3 << endl;
    }
};

int main()
{
    Simple s1(1);
    s1.printData();

    Simple s2(1, 4);
    s2.printData();

    return 0;
}