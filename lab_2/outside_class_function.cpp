#include<iostream>
using namespace std;

class abc{
    private:
    int rollno;
    float marks,age;
    string name;

    public:
    void readdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>rollno;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter marks:";
        cin>>marks;
    }

    void display();
};

void abc::display(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll number:"<<rollno<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Marks:"<<marks<<endl;
}

main(){
    abc a;
    a.readdata();
    a.display();
}