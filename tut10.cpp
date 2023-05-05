#include <iostream>
using namespace std;

int main()
{
    /* Loops in C++:
    There are three types of loops in C++:
        1.For loop
        2.While loop
        3.Do while loop
    */

    // For loop
    //  Syntax for for loop
    //  for(intialization; condition; updation)
    //  {
    //          loop body(C++ code);
    //  }

    // for(int i=0;i<=100;i++){
    //     cout<<i<<endl;
    // }

    // Example of infinte loop
    // for(int i=1;34<40;i++){
    //     cout<<i<<endl;
    // }

    // While loop
    // Syntax for while loop
    // While(contion)
    /* {
        C++ statements;
    }
    */

    // Printing 1 to 100 using while loop
    //  int i=0;
    //  while(i<=100){
    //      cout<<i<<endl;
    //      i++;
    //  }

    // Example of infinte while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    // Do while loop
    // Syntax for do while loop
    // do{
    //     C++ statement;
    //   }while(condition);

    // int i=1;
    // do{
    //     cout<<i<<endl;
    //     i++;
    // }while(i<=40);

    // Do while loop runs atleast ones then it will check condition

    int n;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << n << "*" << i << "=" << n * i << endl;
    }

    return 0;
}