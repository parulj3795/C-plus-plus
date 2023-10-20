#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // Using constants such that the value doesn't update.

    const int z = 3; // Cannot be updated. 'a' will be a read-only variable.
    cout<<"Value of a is: "<<z<<endl;
    
    // Manipulators: Alter the output display. Eg. endl, setw
    int a = 3, b = 4354543, c = 3215;
    cout<<"Value of a is: "<<setw(4)<<a<<endl;
    cout<<"Value of b is: "<<setw(4)<<b<<endl;
    cout<<"Value of c is: "<<setw(4)<<c<<endl;

    // Operator precedence - (* / %) come before (+ -). Within the same ( ), preference goes left-to-right. Check cppreference.
    int d = ((a*(4+435))/234);
    cout<<"Value of d is: "<<d<<endl;

    return 0;
}