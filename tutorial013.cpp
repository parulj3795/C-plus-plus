#include<iostream>
using namespace std;

// Function prototype
// type function-name(arguments);

// If this is not defined earlier then the main won't run. sum has to be declared before main. 
// This is a way for the compiler to know that this function will be defined soon.

int sum(int a, int b); 
void g();


int main(){ // Main is a function.
    int num1, num2;
    cout<<"Number 1: "<<endl;
    cin>> num1;
    cout<<"Number 2: "<<endl;
    cin>> num2;

    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0; // For the OS it means that the program has successfully run.
}


int sum(int a, int b){ // a and b are formal parameters. num1 and num2 are the actual parameters.
    int c = a+b;
    return c;
}

void g(){
    cout<<"\nHello!"<<endl;
}