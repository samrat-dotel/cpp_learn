/* Add destructor in single_multiple_inheritance.cpp and show theworking of constructor and destructor.*/

#include <iostream>
using namespace std;

class Parent1 {
private:
    string name, address;

public:
    Parent1() {
        cout << "Enter the name:";
        getline(cin, name);
        cout << "Enter address:";
        getline(cin, address);
    }

    ~Parent1() {
        cout << "Parent1 destructor called" << endl;
    }

    void display() {
        cout << "Name:" << name << endl << "Address:" << address << endl;
    }
};

class Parent2 {
private:
    string rollNo, age;

public:
    Parent2() {
        cout << "Enter roll number:";
        cin >> rollNo;
        cout << "Enter age:";
        cin >> age;
    }

    ~Parent2() {
        cout << "Parent2 destructor called" << endl;
    }

    void display() {
        cout << "Roll number:" << rollNo << endl << "Age:" << age << endl;
    }
};

class Child1 : public Parent1, public Parent2 {
public:
    Child1() : Parent1(), Parent2() {
        Parent1::display();
        Parent2::display();
        getchar();
    }

    ~Child1() {
        cout << "Child1 destructor called" << endl;
    }
};

class Child2 : public Parent1 {
public:
    Child2() : Parent1() {
        Parent1::display();
    }

    ~Child2() {
        cout << "Child2 destructor called" << endl;
    }
};

int main() {
    Child1 C1;
    Child2 C2;
    return 0;
}
