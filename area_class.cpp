#include<iostream>
#include<cmath>
using namespace std;

class Area{
    public:
    void circleArea(int radius){
        float area;
        cout<<"Enter the radius of circle:";
        cin>>radius;
        area = 3.1415*pow(radius,2);
        cout<<"The area of circle is "<<area<<endl;
    }

    void rectangleArea(int length, int breadth){
        float area;
        cout<<"Enter the length of rectangle:";
        cin>>length;
        cout<<"Enter the breadth of rectangle:";
        cin>>breadth;
        area = length * breadth;
        cout<<"The area of rectangle is "<<area<<endl;
    }

    void triangleArea(int base, int height){
        float area;
        cout<<"Enter the base of rectangle:";
        cin>>base;
        cout<<"Enter the height of rectangle:";
        cin>>height;
        area = 0.5 * base * height;
        cout<<"The area of triangle is "<<area<<endl;
    }
};

main(){
    int n;
    cout<<"Enter 1 to find area of circle, 2 for rectangle and 3 for triangle:"<<endl;
    cin>>n;
    Area a;
    if (n==1){
        int r;
       a.circleArea(r);
    }
    else if (n==2){
        int l,b;
        a.rectangleArea(l,b);
    }
    else if (n==3){
        int b,h;
        a.triangleArea(b,h);
    }
    else{
        cout<<"Wrong command";
    }
}