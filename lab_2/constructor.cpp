#include<iostream>
using namespace std;

class Box{
    private:
    float length, breadth, height;

    public:
    Box(){
        length=6;
        breadth=8;
        height=3;
    }//constructor defined

    void volume();
};

void Box::volume(){
    float volume=length*breadth*height;
    cout<<"Volume:"<<volume;
}

main(){
    Box b;//constructor called
    b.volume();
}