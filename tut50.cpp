#include <iostream>
using namespace std;

int main()
{
    // Pointer Basic Example
    // int a = 4;
    // int* b = &a;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<b<<endl;
    // cout<<"The value at address b is "<<*b<<endl;
    // cout<<"The value of a is "<<*b<<endl;
    // cout<<"The address of address b"<<&b<<endl;

    // New operator
    int *p = new int(40);
    // float *p = new float(34.8);
    cout << "The value at address p is " << *p << endl;

    int *arr = new int[3];
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete[] arr;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}