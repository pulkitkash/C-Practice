/* Pointer is a variable that holds the memory adress of 
another variable
*/

#include <iostream>
using namespace std;

main() {
    int a = 10;
    int *p=&a;  // pointer
    int **q = &p;    // pointer to pointer
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<"****************"<<endl;

    cout<<q<<endl;  // adress of p
    cout<<*q<<endl; // adress of a
    cout<<**q<<endl; // value of a 
    cout<<&q<<endl;  // adress of q

    return 0;
}