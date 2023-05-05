#include<iostream>
using namespace std;

class Complex{
    private:
    int real, img;
    public:
    Complex(int r = 0, int i = 0){
        real = r;
        img = i;
    }
    Complex operator+(Complex &obj){
        Complex Result;
        Result.real =real + obj.real;
        Result.img = img + obj.img;
        return Result;
    }
    void display(){
        cout<<"Your complex number is "<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1(3,4),c2(2,8);
    Complex c3;
    c3 = c1 +(c2);
    c1.display();
    c2.display();
    c3.display();
    return 0;
}