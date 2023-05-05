#include<iostream>
using namespace std;

// float funcAverage(int a, int b){
//     float avg = (a + b)/2.0;
//     return avg;
// }

// float funcAverage2(int a, float b){
//     float avg = (a + b)/2.0;
//     return avg;
// }

template<class T>
void Swap(T &a, T &b){
    T temp = a;
        a = b;
        b = temp;
}

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
    float avg = (a + b)/2.0;
    return avg;
}



int main(){
    float a;
    a = funcAverage(5.1, 2);
    cout<<"The average of these numbers is "<<a<<endl;    

    char c1 = 'm', c2 = 'o';
    Swap(c1, c2);
    cout<<c1<<endl<<c2;
    
    return 0;
}