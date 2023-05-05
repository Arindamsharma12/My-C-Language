#include<iostream>
using namespace std;

class Animal
{
    private: 
        string name;
        int speed;
    public:
        string type;
        string sound;
    void setData(string a1, int b1);
    void getData(){
        cout<<"Name of the animal is "<<name<<endl;
        cout<<"Speed of the animal is "<<speed<<" km/h"<<endl;
        cout<<"Type of the animal is "<<type<<endl;
        cout<<"Sound of the animal is "<<sound<<endl;
    }
};

void Animal :: setData(string a1, int b1){
    name = a1;
    speed = b1;

}

int main(){
    Animal dog;
    dog.type = "street dog";
    dog.sound = "bark";
    dog.setData( "Tommy" , 40);
    dog.getData();

    return 0;
}