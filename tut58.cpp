#include<iostream>
#include<cstring>
using namespace std;

// Abstract Base Class
class CWH
{
    protected:
    string title;
    float rating;
    public:
        CWH(string s, float r){
            title = s;
            rating = r;
        }
        virtual void display() = 0; // do - nothing function --> pure virtual function
        
};

class CWHVideo : public CWH
{
    float videolength;
    public:
    CWHVideo(string s, float r, float vl): CWH(s, r){
        videolength = vl;
    }
    void display(){
        cout<<"This is the amazing video with title "<<title<<endl;
        cout<<"Ratings: "<<rating<<" out of 5 stars "<<endl;
        cout<<"Length of this video is "<<videolength<<" minutes "<<endl;
    }
};

class CWHText : public CWH
{
    float words;
    public:
    CWHText(string s, float r, float wc): CWH(s, r){
        words = wc;
    }
    void display(){
        cout<<"This is the amazing text tutorial with title "<<title<<endl;
        cout<<"Ratings of this text tutorial : "<<rating<<" out of 5 stars "<<endl;
        cout<<"Number of words in text tutorial is: "<<words<<" words "<<endl;
    }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    //For Code with harry videos
    title = "Django tutorial ";
    rating = 4.89;
    vlen = 4.36;
    CWHVideo djVideo(title, rating , vlen);
    // djVideo.display();


    // for Code with harry Text
    title = "Django tutorial Text ";
    rating = 4.89;
    words = 433;
    CWHText djText(title, rating , words);
    // djText.display();

    CWH *tut[2];
    tut[0] = &djVideo;
    tut[1] = &djText;

    tut[0]->display();
    tut[1]->display();



    return 0;
}
