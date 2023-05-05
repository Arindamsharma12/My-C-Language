#include<iostream>
using namespace std;

int main(){
   int n;
   cout<<"Enter decimal number: "<<endl;
   cin>>n;

   int rem, i = 1, octal = 0;
   while(n != 0){
      rem  = n % 8;
      octal = octal + rem * i;
      i *= 10;
      n /= 8;
   }

   cout<<"Its octal value is: "<<octal;


   return 0;
}