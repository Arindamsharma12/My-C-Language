#include<iostream>
using namespace std;

int main(){
   int num;
   cout<<"Enter decimal number: "<<endl;
   cin>>num;

   int rem, bin = 0, i = 1;
   while(num != 0){
      rem = num % 2;
      bin = bin + rem * i;
      i *= 10;
      num /= 2;
   }
   
   cout<<"The binary is: "<<bin<<endl;
 
   return 0;
}