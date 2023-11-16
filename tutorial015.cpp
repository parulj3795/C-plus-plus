#include<iostream>
using namespace std;


// The numbers a and b will be first called and stored in place of the formal inputs (int a and int b in prod) on the memory.
// To make things faster (reduce overhead due to saving things on the register) use inline functions.
// inline function is a request to the compiler. It won't always be granted.

// inline replaces function call with the function code itself within the compile time. 
// DO THIS ONLY FOR SMALL FUNCTIONS. If the code is large then it will eat up the cache. 
// DO NOT USE FOR RECURSION

inline int prod(int a, int b){
    return a*b;
}

int func(int a, int b){
    // static variables shouldn't be used in loops or with inline functions. Use for simpler functions
    static int c = 0;   // Initialised only ONCE and the value will be retained afterwards. c will be 0 only the first time the code runs. 
    c = c+1;            // This will update the value of c every time the function is called.
    return a*b+c;
}

// Default arguments should come later. Compulsary arguments should be in the beginning. 
float moneyRec(int currMon, float factor=1.04){
    return currMon*factor;
}

// Adding const before will tell the compiler to NOT change the value.
int strlen(const char *p){
    return 0;
}

int main(){
    int a, b;
    cout<<"Enter value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<prod(a,b)<<endl;

    cout<<"The function with a and b is "<<func(a,b)<<endl;
    cout<<"The function with a and b is "<<func(a,b)<<endl;
    cout<<"The function with a and b is "<<func(a,b)<<endl;

    int money=100000;
    // Default value of factor is used.
    cout<<"If you have Rs "<<money<<" in your account, you will receive Rs "<<moneyRec(money)<<" after 1 yr"<<endl;

    // Override default value.
    cout<<"If you have Rs "<<money<<" in your account, you will receive Rs "<<moneyRec(money, 1.1)<<" after 1 yr"<<endl;


    return 0;
}