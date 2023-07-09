#include<iostream>
using namespace std;

class Person{
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

class Student: public Person{
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
    Student p;
    p.Person::get();
    p.get();
    p.Person::display();
    p.display();
}