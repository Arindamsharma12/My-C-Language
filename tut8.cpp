#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a=3;
    // cout<<"The value of a was: "<<a;
    // a=4;
    //  cout<<"The value of a is: "<<a;

    // Constants in C++
    // const int a=3;
    // cout<<"The value of a was: "<<a;
    //  a=4; you will get an error because a is constant
    // cout<<"The value of a is: "<<a;

    //  Manipulators in C++
    //  int a=3, b=78, c=1233;
    //  cout<<"The value of a without setw is: "<<a<<endl;
    //  cout<<"The value of b without setw is: "<<b<<endl;
    //  cout<<"The value of c without setw is: "<<c<<endl;

    //  cout<<"The value of c with setw is: "<<setw(4)<<a<<endl;
    //  cout<<"The value of c with setw is: "<<setw(4)<<b<<endl;
    //  cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;

    // Operator precedence
    int a = 3, b = 4;
    // int c = (a*5)+b;
    int c = ((((a * 5) + b) - 45) + 87);
    cout << c;

    return 0;
}