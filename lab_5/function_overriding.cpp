#include<iostream>
using namespace std;

class Body{
    private:
    string department, year;

    public:
    void get(){
        cout<<"Enter the name of department:";
        getline(cin,department);
        cout<<"Enter the year that you are in:";
        getline(cin,year);
    } 

    void display(){
        cout<<"Department:"<<department<<endl<<"Year:"<<year<<endl;
    }
};

class Part: public Body{
    private:
    string part, subjects;

    public:
    void get(){
        cout<<"Enter the part you are in:";
        getline(cin,part);
        cout<<"Enter the number of subjects:";
        cin>>subjects;
    }

    void display(){
        cout<<"Part:"<<part<<endl<<"Subjects:"<<subjects<<endl;
    }
};

main(){
    Part p;
    p.Body::get();
    p.get();
    p.Body::display();
    p.display();
}