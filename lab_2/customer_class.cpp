#include<iostream>
using namespace std;

class Customer{
    private:
    string customerName, productBought;
    int paidAmount;
    float Totalamount;

    public:
    void readdata(){
        cout<<"Enter the customer name:";
        cin>>customerName;
        cout<<"Enter the name of product bought:";
        cin>>productBought;
        cout<<"Enter the amount paid:Rs.";
        cin>>paidAmount;
    }

    void displaydata(){
        cout<<"Customer name:"<<customerName<<endl;
        
        cout<<"Product bought:"<<productBought<<endl;
        
        cout<<"Total amount:Rs."<<paidAmount<<endl;
        
        if (paidAmount > 20000){
            cout<<"As you have purchaged product of more than Rs. 20000, you receive a discount of 5% as per the policy of this company."<<endl;
            Totalamount = paidAmount - 0.05*paidAmount;
            cout<<"Final Bill:Rs."<<Totalamount;
        }
        else{
            cout<<"Final Bill:"<<paidAmount;
        }
    }
};

main(){
    Customer c;
    c.readdata();
    c.displaydata();
}