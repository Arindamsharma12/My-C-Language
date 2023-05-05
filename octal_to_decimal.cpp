#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter octal num: "<<endl;
   cin>>num;

   int rem, decimal = 0, i = 1;
   while(num != 0){
      rem = num % 10;
      decimal = decimal + rem * i;
      i *= 8;
      num /= 10;
   }

   cout<<"Its decimal value is: "<<decimal<<endl;
   return 0;
}