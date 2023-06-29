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

class Child2: public Parent1{
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
    Child1 c1;
    Child2 c2;
    c1.getdata();
    c1.get();
    c2.takedata();
    c1.putdata();
    c1.put();
    c2.display();
}