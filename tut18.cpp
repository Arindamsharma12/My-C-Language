#include<iostream>
using namespace std;

// **********Recursions***********
int fact(int n){
    if(n<=1){
        return 1;
    }
   return n*fact(n-1);
}

// Step by step calculation for factorial(4)
// fact(4) = 4*fact(3);
// fact(4) = 4*3*fact(2);
// fact(4) = 4*3*2*fact(1);
// fact(4) = 4*3*2*1;
// fact(4) = 24;

int fib(int n){
    if(n<=2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

// fib(5)
// fib(4) + fib(3)
// fib(3) + fib(2) + fib(1) + fib(2)

int main(){
    // Factorial of number
    // n! = n*(n-1)!
    // 0! = 1 by defination
    // 1! = 1 by defination

    int a;
    cout<<"Enter a number: ";
    cin>>a;

    // cout<<"The factorial of "<<a<<" is "<<fact(a)<<endl;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;

  
    return 0;
}