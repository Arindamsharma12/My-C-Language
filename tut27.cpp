#include <iostream>
using namespace std;

// Forward declaration
class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex o1, complex o2);
    int sumCompComplex(complex o1, complex o2);
};

class complex
{
    int a, b;

    // Individually declaring function as friends
    // friend int calculator ::sumRealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    // Alter: Declaring the entire calculator class as friend
    friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void getNumber()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setNumber(1, 4);
    c1.getNumber();

    c2.setNumber(2, 5);
    c2.getNumber();

    calculator cal;

    cout << "The sum of the real part of your complexes is " << cal.sumRealComplex(c1, c2) << endl;
    cout << "The sum of the imaginary part of your complexes is " << cal.sumCompComplex(c1, c2) << endl;

    return 0;
}