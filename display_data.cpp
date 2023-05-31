#include<iostream>
using namespace std;

main(){
    int rollNo;
    string name;
    float marks;
    int age;

    cout<<"Enter the roll number:";
    cin>>rollNo;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the marks:";
    cin>>marks;
    cout<<"Enter the age:";
    cin>>age;

    cout<<"The student with name "<<name<<", age "<<age<<" and roll number "<<rollNo<<" got "<<marks<<"marks in his exam";
}