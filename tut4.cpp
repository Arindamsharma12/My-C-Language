#include <iostream>
using namespace std;

int glo = 6;

void sum()
{
    int a;
    cout << glo << endl;
}

int main()
{

    int glo = 9;
    glo = 78;
    int a = 4, b = 5;
    float pi = 3.14;
    char c = 'd';
    bool is_true = true;
    // cout<<"This is tutorial 4.\nHere the value of a is "<<a<<". The value of b is "<<b<<endl;
    // cout<<"The value of pi is : "<<pi;
    // cout<<"\nThe value of c is : "<<c;

    sum();
    cout << glo << endl
         << is_true;
    return 0;
}