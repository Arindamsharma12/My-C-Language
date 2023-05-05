#include <iostream>
using namespace std;

// Function prototype
// type funtion_name(arguments);
// int sum(int a, int b) --> Acceptable
// int sum(int a,b) --> Not Acceptable
// int sum(int , int) --> Acceptable
int sum(int a, int b)
{
    // formal parameters a and b are taking value from actual parameters num1 and num2
    int c = a + b;
    return c;
}

void g()
{
    cout << "Hello good morning\n";
}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    // num1 and num2 are actual parameters
    cout << "The sum of num1 and num2 is " << sum(num1, num2);
    g();
    return 0;
}