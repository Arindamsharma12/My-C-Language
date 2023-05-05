#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // // connecting our file with hout stream
    // ofstream hout("sample60.text");
    
    // // creating a name string and filling it with string entered by the user 
    // string name;
    // cout<<"Enter the name: ";
    // cin>>name;

    // // writing a string to the file
    // hout<<name + " is my name ";

    // hout.close();

    ifstream hin("sample60.txt");
    string content;
    getline(hin, content);
    cout<<"The content of this file is: "<<content;
    hin.close();
    return 0;
}