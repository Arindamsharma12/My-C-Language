#include <iostream>
using namespace std;

int main()
{
    // cout<<"This is tutorial 9";

    // Selection control stucture: if else-if else lader

    int age;
    cout << "Enter your age: ";
    cin >> age;

    // if(age<18){
    //     cout<<"You can not come to the party";
    // }
    // else if (age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party";
    // }
    // else{
    //     cout<<"You can come to the party";
    // }

    // Selection control structure: Switch case statement
    switch (age)
    {
    case 18:
        cout << "You are 18";
        break;
    case 22:
        cout << "You are 22";
        break;
    case 2:
        cout << "You are 2";
        break;

    default:
        cout << "No special cases" << endl;
        break;
    }

    cout << "Done with switch case";
    return 0;
}