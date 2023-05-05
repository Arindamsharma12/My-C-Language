#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee() {}
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
};

// Derived class syntax
// class derived-class-name : {{visibility-mode}} {{base-class-name}}
/*
{
    class members/methods/etc...
};
Notes:
1. Default visibility mode is private.
2. Private visibility mode: Public members of the base class becomes private members of the derived class.
3. Public visibility mode: Public members of the base class becomes public members of the derived class.
4. Private members of base class can never inherited.
*/

// Creating a programmer class derived from Employee base class

class programmer : public Employee
{
public:
    int languagecode;
    programmer(int inpId)
    {
        id = inpId;
        languagecode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;

    programmer skillF(10);
    cout << skillF.languagecode << endl;
    cout << skillF.id << endl;
    skillF.getData();

    return 0;
}