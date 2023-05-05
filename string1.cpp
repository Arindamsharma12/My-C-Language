#include<iostream>
using namespace std;

void display(char *);
void display(string);


int main(){
    // Unlike using char arrays, you can create an sting object to hold characters.
    // string objects has no fixed length, and can be extended as per your requirement.

    // Declaration of string object
    // string str;
    // cout<<"Enter a string: "<<endl;
    // getline(cin, str);
    // cout<<"You entered "<<str<<endl;

    // Instead of writting cin >> str; or cin.get(); we can get the entered line of text using getline(cin, str).
    // getline() takes two arguments(parameters):
    //  1. Input stream (cin).
    //  2. location of the line to be stored (str).

    string str1;
    char str[100];

    cout<<"Enter the string: "<<endl;
    getline(cin, str1);

    cout<<"Enter another string: "<<endl;
    cin.get(str, 100);

    display(str1);
    display(str);

    return 0;
}

void display(char s[]){
    cout<<"Entered C-string is "<<s<<endl;
}

void display(string s){
    cout<<"Entered string object is "<<s<<endl;
}