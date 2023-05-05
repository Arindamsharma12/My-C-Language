#include <iostream>
using namespace std;

int main()
{
    // What is a pointer? ---> data type which hold the address of other data types

    int a = 3;
    int *b = &a;

    // & --> (address of) operator
    cout << "The address of a is " << &a << endl;
    cout << "The address of a is " << b << endl;

    // * --> (value at) Dereference operator
    cout << "The value at address b is " << *b << endl;

    // pointer to pointer --> Stores the address of pointers
    int **c = &b;

    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address c is " << *c << endl;
    cout << "The value at address b is " << **c << endl;

    return 0;
}