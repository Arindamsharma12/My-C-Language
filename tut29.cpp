#include <iostream>
using namespace std;

class complex
{
    int a, b;
    // Creating a constructor
    // constructor is a special member function with same name as of the class.
    // It is used to initializ the objects of its class.
    // It is automatically invoked(call) whenever an object is created.
public:
    complex(void); // constructor declaration

    void printData()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void) // This is a default constructor as it do not take any perimeter
{
    a = 10;
    b = 20;
}

int main()
{
    complex c1, c2, c3;
    c1.printData();
    c2.printData();
    c3.printData();
    return 0;
}
// Characteristics of constructors

// 1. It should be declared in the public section of the class.
// 2. They are automatically invoked whenever the object is created.
// 3. They cannot return values and do not have return types.
// 4. It can have default arguments.
// 5. We cannot refer to their address. 
