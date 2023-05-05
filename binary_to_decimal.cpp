#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter binary number: "<<endl;
   cin>>num;

   int rem, decimal = 0, i = 1;
   
   while (num != 0)
   {
      rem = num % 10;
      decimal = decimal + rem * i;
      i *= 2;
      num /= 10;
   }

   cout<<"The decimal value is: "<<decimal<<endl;

   return 0;
}