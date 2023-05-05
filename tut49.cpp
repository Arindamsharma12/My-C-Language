#include<iostream>
using namespace std;
/*
syntax for initialization list for constructor:
    constructor(argument-list) : initialization-section
    {

    }

class Test{
    int a,b;
    public:
        Test(int i, int j) : a(i), b(j){
            constructor-body;
        }
};

*/

class Test{
    int a,b;
    public:
        // Test(int i, int j) : a(i), b(j)
        // Test(int i, int j) : a(i), b(i+j)
        // Test(int i, int j) : a(i), b(2*j)
        // Test(int i, int j) : a(i), b(a + j)
        // Test(int i, int j) : b(j), a(i + b) //---> This will create problem because a will initialize first
        Test(int i, int j) : a(i)
        {
            b = j;
            cout<<"constructor-executed"<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
};

int main(){
    Test t(4,6);
    return 0;
}