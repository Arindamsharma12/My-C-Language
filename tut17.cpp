#include <iostream>
using namespace std;

inline int product(int a, int b)
{
    // Not recommended to use below lines with inline functions
    // static int c=0; // This excute only once
    // c = c + 1;  // Next time this fuction is run, the value of c will be retained
    return a * b; // + c;
}

float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

// int strlen(const char *p){

// }

int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b: "<<endl;
    // cin>>a>>b;

    // cout<<"The product of a and b is "<<product(a, b)<<endl;

    int money;
    cout << "Enter the current money: ";
    cin >> money;
    cout << "If you have Rs." << money << " in your bank account, the you will receive Rs." << moneyReceived(money) << " after 1 year " << endl
         << endl;
    cout << "For VIP: If you have Rs." << money << " in your bank account, the you will receive Rs." << moneyReceived(money, 1.10) << " after 1 year ";
    return 0;
}