/* WAP to illustrate the use of virtual destructor. */

#include<iostream>
using namespace std;

class Parent{
    public:
    string location, number;

    Parent(){
        cout<<"Enter your location choice:";
        getline(cin, location);
        cout<<"Enter the number of visitors:";
        cin>>number;
        getchar();
    }

    virtual ~Parent(){
        cout<<endl;
        cout<<"Parent class destroyed."<<endl;
    }
};

class Child: public Parent{
    private:
    string nationality, date;

    public:
    Child(){ 
        cout<<"Enter your nationality: ";
        getline(cin,nationality);
        cout<<"Enter your preferred date: ";
        getline(cin, date);
    }

    void display(){
        cout<<"Location: "<<location<<endl;
        cout<<"Number of visitors: "<<number<<endl;
        cout<<"Nationality: "<<nationality<<endl;
        cout<<"Date: "<<date<<endl;
    }

    ~Child(){
        cout<<endl;
        cout<<"Child class destroyed."<<endl;
    }
};

int main(){
    Child *C = new Child;
    C->display();
    delete C;
}