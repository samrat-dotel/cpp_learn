#include<iostream>
using namespace std;

int sum(int x, int y=0, int z=0, int a=0){
    return(x+y+z+a);
}

main(){
        cout<<sum(5,8)<<endl;
        cout<<sum(5,8,9)<<endl;
        cout<<sum(5,8,6,9)<<endl;
        cout<<sum(5)<<endl;
}