#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
    int i;
    for(i = 2; i*i <= (n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    if(i == n){
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter Number: "<<endl;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Non-prime"<<endl;
    }
    return 0;
}