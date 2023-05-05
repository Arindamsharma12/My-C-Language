#include<iostream>
using namespace std;

class Student{
    protected:
    int roll_number;
    public:

    void set_roll_number(int r){
        roll_number = r;
    }

    void print_roll_number(){
        cout<<"Your roll number is "<<roll_number<<endl;
    }
};

class Test:virtual public Student{
    protected:
    float physics;
    float maths;
    public:

    void set_marks(float p, float m){
        physics = p;
        maths = m;
    }

    void get_marks(){
        cout<<"Your result is here: "<<endl;
        cout<<"Physics: "<<physics<<endl;
        cout<<"Maths: "<<maths<<endl;
    }
};

class Sports :virtual public Student{
    protected:
    int score;
    public:

    void set_score(int s){
        score = s;
    }

    void get_score(){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class Result : public Test, public Sports{
    float total;
    public:

    void get_result(){
        print_roll_number();
        get_marks();
        get_score();
        total = physics + maths + score;
        cout<<"Your total score is: "<<total<<endl;
    }
};

int main(){
    Result arindam;
    arindam.set_roll_number(21);
    arindam.set_marks(98.4, 82.6);
    arindam.set_score(5);
    arindam.get_result();
    return 0;
}