#include<iostream>
#include<cmath>
using namespace std;

void circleArea(int radius){
    float area;
    cout<<"Enter radius:";
    cin>>radius;
    area=3.1415*pow(radius,2);
    cout<<"Area of the circle is "<<area;
}

void rectangleArea(int length, int breadth){
    float area;
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
    area=length*breadth;
    cout<<"Area of the rectangle is "<<area;
}

void triangleArea(int base, int height){
    float area;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter height:";
    cin>>height;
    area=0.5*base*height;
    cout<<"Area of the triangle is "<<area;
}

main(){
    int n;
    cout<<"Enter 1 to find area of circle, 2 for rectangle and 3 for triangle:"<<endl;
    cin>>n;
    if (n==1){
        float r;
        circleArea(r);
    }
    else if (n==2){
        float l,b;
        rectangleArea(l, b);
    }
    else if (n==3){
        float h,a;
        triangleArea(a, h);
    }
    else{
        cout<<"Wrong command"<<endl;
    }
}