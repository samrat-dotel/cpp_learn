#include<iostream>
#include<cmath>
using namespace std;

class Area{
    public:
    float calculateArea(int radius){
        float area;
        cout<<"Enter the radius of circle:";
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
        cout<<"Enter the length of rectangle:";
        cin>>length;
        cout<<"Enter the breadth of rectangle:";
        cin>>breadth;
        if (length<0 || breadth<0){
            cout<<"Length or breadth cannot be negative.";
        }
        else{ 
        area = length * breadth;
        cout<<"The area of rectangle is "<<area<<endl;
        }
    }

    void triangleArea(int base, int height){
        float area;
        cout<<"Enter the base of rectangle:";
        cin>>base;
        cout<<"Enter the height of rectangle:";
        cin>>height;
        if (base<0 || height<0){
            cout<<"base or hright cannot be 0.";
        }
        else{ 
        area = 0.5 * base * height;
        cout<<"The area of triangle is "<<area<<endl;
        }
    }
};

main(){
    int n;
    cout<<"Enter 1 to find area of circle, 2 for rectangle and 3 for triangle:"<<endl;
    cin>>n;
    Area a;
    if (n==1){
        float radius;
        float circleArea;
        circleArea = a.calculateArea(radius);
    }
    else if (n==2){
        float length,breadth;
        float rectangleArea;
        rectangleArea = a.calculateArea(length,breadth);
    }
    else if (n==3){
        int b,h;
        a.triangleArea(b,h);
    }
    else{
        cout<<"Wrong command";
    }
}