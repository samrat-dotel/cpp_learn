#include<iostream>
using namespace std;

class Student{
    private:
    string name;

    public:
    void getdata(){
        cout<<"Enter name:";
        getline(cin,name);
    }

    void putdata(){
        cout<<"Name:"<<name<<endl;
    }
};

class Test: virtual public Student{
    private:
    string rollNo;

    public:
    void get(){ 
    cout<<"Enter roll number:";
    cin>>rollNo;
    }
    void put(){
        cout<<"Roll number:"<<rollNo<<endl;
    }
};

class Sports: virtual public Student{
    private:
    string age;

    public:
    void gets(){
        cout<<"Enter age:";
        cin>>age;
    }

    void puts(){
        cout<<"Age:"<<age<<endl;
    }
};

class Fee: public Test, public Sports{
    private:
    string fee;

    public:
    void getsgets(){
        cout<<"Enter fee:";
        cin>>fee;
    }
    void putsputs(){
        cout<<"Fee:"<<fee<<endl;
    }
};

main(){
    Fee f;
    f.getdata();
    f.get();
    f.gets();
    f.getsgets();
    f.putdata();
    f.put();
    f.puts();
    f.putsputs();
}