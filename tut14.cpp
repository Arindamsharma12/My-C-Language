#include <iostream>
using namespace std;

typedef struct employee
{
    int eId;      // 4 bytes
    char favChar; // 1 byte
    float salary; // 4 bytes
    // Total 9 bytes are used

} ep;

union money
{
    int rice;    // 4 bytes
    char car;    // 1 byte
    float pound; // 4 bytes
    // only 4 bytes are used
};

int main()
{
    // union money m1;
    // m1.rice= 34;
    // cout<<m1.rice<<endl;
    // Use only one value of union otherwise we will not get the right value

    // ep harry;
    // struct employee shubham ;
    // struct employee rohanDas;
    // harry.eId = 1;
    // harry.favChar = 'c';
    // harry.salary = 120000000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

    enum Meal
    {
        breakfast,
        lunch,
        dinner
    };
    // Meal m1 = lunch;
    // cout << m1 << endl;

    cout << breakfast << endl;
    cout << lunch << endl;
    cout << dinner << endl;
    return 0;
}