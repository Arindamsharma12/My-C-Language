#include<iostream>
using namespace std;

/*
Case 1:
class B: public A{
    // Order of execution of constructor -> first A() then B()
};

Case 2:
class A: public B, public C{
    // Order of execution of constructor -> first B() then C() then A()
};

Case 3:
class A: public B, virtual public C{
    // Order of execution of constructor -> first C() then B() then A()
};
*/

class Base1{
    int data1;
    public:
    Base1(int i){
        data1 = i;
        cout<<"Base1 class constructor is called"<<endl;
    }
    void print_data1(){
        cout<<"The value of data1 is "<<data1<<endl;
    }
};

class Base2{
    int data2;
    public:
    Base2(int i){
        data2 = i;
        cout<<"Base2 class constructor is called"<<endl;
    }
    void print_data2(){
        cout<<"The value of data2 is "<<data2<<endl;
    }
};

class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
        Derived(int a, int b, int c, int d) : Base1(a) , Base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor is called"<<endl;
        } 
        void print_data(){
            cout<<"The value of derived1 and derived2 are "<<derived1<<" and "<<derived2<<endl;
        }
};

int main(){
    Derived arindam(1,2,3,4);
    arindam.print_data1();
    arindam.print_data2();
    arindam.print_data();
    return 0;
}