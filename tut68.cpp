#include<iostream>
using namespace std;

template<class T>
class Harry{
    public:
    T data;
    Harry(T a){
        data = a;
    }
    void display();
};

template <class T>
void Harry <T>:: display(){
    cout<<data;
}

void func(int a){
    cout<<"I'm first func() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I'm templatised func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I'm templatised func() "<<a<<endl;
}

int main(){
    // Harry <int> h(5);
    // Harry <char> h('c');
    // Harry <int> h(87);
    // cout<<h.data<<endl;
    // h.display();

    func(7); // Exact match takes the highest priority.
    func1(7); // Exact match takes the highest priority.
    
    return 0;
}