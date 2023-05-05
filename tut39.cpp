#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;
};
// For a protected member:
/*                           Public Derivation       Private Derivation      Protected Derivation
    1. Private members       Not inherited             Not inherited            Not inherited   
    2. Protected members        protected                  private              Protected
    3. Public members           Public                     private              Protected
   
*/
class Derived: protected Base{

};

int main(){
    Base b;
    Derived d;
    
    // cout<<b.a; // will not work in both base as well as derived class as it is protected in both.
    // cout<<d.a;
    return 0;
}