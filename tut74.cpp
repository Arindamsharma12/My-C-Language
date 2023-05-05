#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    // Function objects (Functors): Function wrapped in a class so that it is available like an object.
    int arr[] = {1, 73, 64, 52, 38, 31};
    // sort(arr, arr + 6);
    sort(arr, arr + 6, greater<int>());
    for(int i = 0; i < 6; i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}