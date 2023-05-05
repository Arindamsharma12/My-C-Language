#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
    int a, b;
    public:
    void get_data(){
        cout<<"Enter the first number: "<<endl;
        cin>>a;

        cout<<"Enter the second number: "<<endl;
        cin>>b;
    }
    void performOperator(){
        cout<<"The value of a + b is "<<a + b<<endl;
        cout<<"The value of a - b is "<<a - b<<endl;
        cout<<"The value of a * b is "<<a * b<<endl;
        cout<<"The value of a / b is "<<a / b<<endl;
    };
};

class ScientificCalculator{
    protected:
    int a;
    public:
    void get_num(){
        cout<<"Enter the number: "<<endl;
        cin>>a;
    }
    void performScientificOperator(){
        cout<<"The exponential of "<<a<<" is "<<exp(a)<<endl;
        cout<<"The value of sin("<<a<<") is "<<sin(a)<<endl;
        cout<<"The value of cos("<<a<<") is "<<cos(a)<<endl;
        cout<<"The value of tan("<<a<<") is "<<tan(a)<<endl;
    }
};

class HybridCalculator: public ScientificCalculator, public SimpleCalculator{
    public:
    void display(){
        cout<<"<---- THANK YOU!!! ---->"<<endl;
    }
};
int main(){
    HybridCalculator harry;
    harry.get_data();
    harry.performOperator();
    harry.get_num();
    harry.performScientificOperator();
    harry.display();


    return 0;
}