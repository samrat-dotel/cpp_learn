/* WAP to implement run-time polymorphism. */

#include<iostream>
using namespace std;

class Organisms{
    public:
    virtual void Names(){
        cout<<"Lion, Shark, Pea, Mango tree, Frog.";
    }
};

class Plants: public Organisms{
    public:
    void Names(){
        cout<<"Name of plants: Pea, Mango tree."<<endl;
    }
};

class Animals: public Organisms{
    public:
    void Names(){
        cout<<"Name of animals: Lion, Shark, Frog."<<endl;
    }
};

int main(){
    Organisms* orgptr;
    Plants pl;
    Animals ani;

    orgptr = &pl;
    orgptr->Names();

    orgptr = &ani;
    orgptr->Names();
}