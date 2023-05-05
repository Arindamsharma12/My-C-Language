#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number: "<<endl;
    cin>>num;

    int i;
    for(i = 2; i < num; i++){
        if(num % i == 0){
            cout<<num<<" is not a prime number."<<endl;
            exit(0);
        }
    }
    if(num == i){
        cout<<num<<" is the prime number."<<endl;
    }
    return 0;
}