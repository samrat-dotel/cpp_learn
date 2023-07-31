#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a:";
    cin>>a;
    try
    {
        if (a < 0){
            throw a;
            cout<<"Exception found";
        }
    }
    catch(int a)
    {
        cout<<"The value does not accept."<<endl;
    }
    
    cout<<"The value of a is "<<a;
    
}