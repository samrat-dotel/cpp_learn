#include<iostream>
using namespace std;

class abc{
private:
    int x,y;
public:
    abc();
    abc(int a, int b);

    abc(abc &s){
        cout<<"Copy constructor is called."<<endl;
        x=s.x;
        y=s.y;
        cout<<x<<endl<<y<<endl;
    }
    ~abc();
};


abc::abc(){
    cout<<"Default constructor is called."<<endl;
    x=0;
    y=0;
    cout<<x<<endl<<y<<endl;
}

abc::abc(int a, int b)
{
    cout<<"Parametrized constructor is called."<<endl;
    x=a;
    y=b;
    cout<<x<<endl<<y<<endl;
}

abc::~abc(){
    cout<<"Destructor is called."<<endl;
}

main(){
    abc A;
    abc B(10,30);
    abc C;
    abc D(B);
    {
        abc E,F;
        abc G;
    }
    {
        abc H;
    }
    getchar();
}