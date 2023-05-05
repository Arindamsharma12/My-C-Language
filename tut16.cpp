#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b)
{                 // temp a b
    int temp = a; //   4   4 5
    a = b;        //    4   5 5
    b = temp;     //     4   5 4
}

// Call by refrence using pointers
void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// Call by refrence using c++ refrence variables
void swapRefrenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 4, y = 5;
    // cin>>x>>y;
    // cout<<"The sum of two numbers is "<<sum(x, y);

    cout << "The value of x is " << x << " The value of y is " << y << endl;
    // swap(x, y); //This will not swap x and y
    // swapPointer(&x, &y); //This will swap x and y using pointer refrence
    swapRefrenceVar(x, y); // This will swap x and y using refrence variables
    cout << "The value of x is " << x << " The value of y is " << y;
    return 0;
}