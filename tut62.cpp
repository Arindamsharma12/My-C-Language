#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out;
    out.open("arindam.txt");
    out<<"Hello fucking lusty\n";
    out<<"You are motherfucker ";
    out<<"I'm your father ";
    out.close();

    ifstream in;
    string st, st2;
    in.open("sample60b.txt");
    // in>>st>>st2;
    // cout<<st<<st2;
    while(in.eof()==0){
        getline(in, st);
        cout<<st<<endl;
    }
    in.close();
    return 0;
}