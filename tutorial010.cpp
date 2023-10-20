#include<iostream>
using namespace std;

int main(){

    /* Variables are stored in our RAM. When a programs are run they 
    are copied to the RAM and each variable is given some memory storage.*/

    int a=3; 

    // & --> Address of operator
    cout<<&a<<endl; // Gives the address of a. b is a pointer which stores the address of a.

    int * b = &a;
    // * --> Dereference operator
    cout<<*b<<endl; // Gives the value which is stored at this address.

    int ** c = &b; // Pointer to pointer stores the address of an address. Pointer c stores the address of pointer b.
    cout<<c<<endl;
    cout<<*c<<endl; // Value at address c.
    cout<<**c<<endl; // Value at the value of address stored in c. 

    return 0;
}