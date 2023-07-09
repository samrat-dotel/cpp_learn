#include<iostream>
using namespace std;

class Parent1{
    private:
    string name, address;

    public:
    void getdata(){
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter address:";
        getline(cin,address);
    }

    void putdata(){
        cout<<"Name:"<<name<<endl<<"Address:"<<address<<endl;
    }
};

class Child1: public Parent1{
    private:
    string rollNo, phone;

    public:
    void get(){
        cout<<"Enter roll number:";
        cin>>rollNo;
        cout<<"Enter phone number:";
        cin>>phone;
    }

    void put(){
        cout<<"Roll number:"<<rollNo<<endl<<"Phone number:"<<phone<<endl;
    }
};

class Child2: public Child1{
    private:
    string age;

    public:
    void takedata(){
        cout<<"Enter age:";
        cin>>age;
    }

    void display(){
        cout<<"Age:"<<age<<endl;
    }
};

main(){
    Child2 c;
    c.getdata();
    c.get();
    c.takedata();
    c.putdata();
    c.put();
    c.display();
}