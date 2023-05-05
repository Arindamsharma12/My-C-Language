#include <iostream>
using namespace std;

class Employee
{
    int id;
    // int count; // yahan default value 0 nahi hogi aur har object ka apna ek count hoga
    static int count; // idhr value 0 hoti hai by default aur objects count share krte hain

public:
    void setData(void)
    {
        cout << "Enter the id of the employee" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of the employee is " << id << " and this is employee number " << count << endl;
    }

    static void getcount(void)
    {
        // cout<<id; throws an error
        cout << "The value of count is " << count << endl;
    }
};
// ************static data member***************
// count is the static data member of class Employee
int Employee ::count; // Default value is 0 If you want to start the count from 1000 then equate count=1000 here only

int main()
{
    Employee harry, rohan, lovish;

    // harry.id=1;
    // harry.count=1; --> cannot do this as id and count are private
    harry.setData();
    harry.getData();
    Employee::getcount();

    rohan.setData();
    rohan.getData();
    Employee::getcount();

    lovish.setData();
    lovish.getData();
    Employee::getcount();

    return 0;
}