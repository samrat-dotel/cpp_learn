#include<iostream>
#include<cmath>
using namespace std;

main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    for (int i=2; i<= sqrt(n); i++){
        if (n%i==0){
            cout<<"The number is not prime";
            return 0;
        }
    }
    cout<<"The number is prime";
}