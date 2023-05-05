#include<iostream>
using namespace std;

int main(){
   int i,n;
   cout<<"Enter a number: ";
   cin>>n;

   for(i=2;i<n;i++){
    if(n%i==0){
        cout<<"Non-Prime";
        break;
    }
   }
   if(n==i){
    cout<<"prime";
   }
    return 0;
}