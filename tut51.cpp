#include<iostream>
using namespace std;

class Complex{
    int real, imaginary;
    public:
    void setData(int a, int b){
        real = a;
        imaginary = b;
    }

    void getData(){
        cout<<"The real part of the complex number is "<<real<<endl;
        cout<<"The imaginary part of the complex number is "<<imaginary<<endl;
    }
};

int main(){
    // Complex c1;
    // c1.setData(3, 5);
    // c1.getData();

    Complex *ptr = new Complex;
    // (*ptr).setData(3, 5); is exactly same as
    ptr->setData(3, 5);
    // (*ptr).getData(); is good as 
    ptr->getData();

    // Array of objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 54);
    ptr1->getData();
    return 0;
}