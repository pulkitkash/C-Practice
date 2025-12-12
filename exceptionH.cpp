#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    double bal = 1000.0;
    try {
        //Deposit
        double amt;
        cout<<"Enter deposit amount: ";
        cin>>amt;
        if(amt<=0) {
            cout<<"Invalid deposit amount"<<endl;
        }
        bal=bal+amt;
        cout<<"Available Amount: "<<bal<<endl;
        // Withdrawl
        cout<<"Enter Withdrawl amount: ";
        cin>>amt;
        if(amt>bal) {
            cout<<"Withdrawal amount is more than the balance "<<endl;
        }
        if(amt<=0) {
            cout<<"Invalid withdrawl amount";
        }
        bal=bal-amt;
        cout<<"Available Amount: "<<bal<<endl;
    }
    catch(exception e) {
        cout<<e.what();

    }
}