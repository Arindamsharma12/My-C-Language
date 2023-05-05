#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    BankDeposit() {}
    BankDeposit(int p, int y, float r); // r can take value like 0.04
    BankDeposit(int p, int y, int r);   // r can take value like 14

    void show()
    {
        cout << "Your principal amount is " << principal << ". And the return amount after " << year << " years is " << returnValue << endl;
    }
};

BankDeposit ::BankDeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;

    for (int i = 0; i < year; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    interestRate = float(r) / 100;
    returnValue = principal;

    for (int i = 0; i < year; i++)
    {
        returnValue *= (1 + interestRate);
    }
}

int main()
{
    BankDeposit bd1, bd2, bd3;
    int p, y, R;
    float r;

    cout << "Enter the value of principal amount, years and interest rate: " << endl;
    cin >> p >> y >> r;

    bd1 = BankDeposit(p, y, r);
    bd1.show();

    cout << "Enter the value of principal amount, years and percentage of interest: " << endl;
    cin >> p >> y >> R;

    bd2 = BankDeposit(p, y, R);
    bd2.show();

    bd3.show();

    return 0;
}