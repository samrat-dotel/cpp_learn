#include<iostream>
#include<cmath>
using namespace std;

float calculateArea(int radius){
    float area;
    cout<<"Enter radius:";
    cin>>radius;
    if (radius<0){
            cout<<"Radius cannot be negative.";
        }
    else{ 
        area = 3.1415*pow(radius,2);
        cout<<"The area of circle is "<<area<<endl;
        }
}

float calculateArea(int length, int breadth){
    float area;
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
    if (length<0 || breadth<0){
            cout<<"Length or breadth cannot be negative.";
        }
    else{ 
        area = length * breadth;
        cout<<"The area of rectangle is "<<area<<endl;
        }
}

float triangleArea(int base, int height){
    float area;
    cout<<"Enter base:";
    cin>>base;
    cout<<"Enter height:";
    cin>>height;
    if (base<0 || height<0){
            cout<<"Base or height cannot be negative.";
        }
    else{ 
        area = 0.5 * base * height;
        cout<<"The area of triangle is "<<area<<endl;
        }
}

main(){
    int n;
    cout<<"Enter 1 to find area of circle, 2 for rectangle and 3 for triangle:"<<endl;
    cin>>n;
    if (n==1){
        float radius;
        float circleArea;
        circleArea = calculateArea(radius);
    }
    else if (n==2){
        float length,breadth;
        float rectangleArea;
        rectangleArea = calculateArea(length,breadth);
    }
    else if (n==3){
        float h,a;
        triangleArea(a, h);
    }
    else{
        cout<<"Wrong command"<<endl;
    }
}
//Here area of circle and area of rectangle shows function overloading as they have same function name but performs
    //different tasks.