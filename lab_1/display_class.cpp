#include<iostream>
using namespace std;

class Student{
    private:
    int rollNo;
    string name;
    int age;
    float marks;

    public:
    void readdata(){
    cout<<"Enter the roll number:";
    cin>>rollNo;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the marks:";
    cin>>marks;
    cout<<"Enter the age:";
    cin>>age;
    }

    void display(){
        cout<<"Roll number:"<<rollNo<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        cout<<"marks:"<<marks<<endl;
    }
};

int main(){
    Student s1;
    s1.readdata();
    s1.display();
}