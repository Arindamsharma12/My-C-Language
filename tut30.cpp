#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
        complex(int, int);
        void printData(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

// complex :: complex(void) --> This is a default constructor as it accepts no parameters.
// {
//     a = 10;
//     b = 20;
// }

complex:: complex(int x, int y) //--> This is the parameterised constructor as it take 2 parameters.
{
    a = x;
    b = y;
}

int main(){
    // Implicit call
    complex a(4, 6);
    a.printData();

    // Explicit call
    complex b = complex(5, 7);
    b.printData();

    return 0;
}