#include<iostream>
using namespace std;

// Recursive function. Calls itself until a condition is met.
// Making recursive functions is not always good as it can give a large overhead.

int factorial(int n){
    if (n <= 1){
        return 1;
    }
    return n*factorial(n-1);
}

/*
factorial(4) = 4 * factorial(3)
                   factorial(3) = 3 * factorial(2)
                                      factorial(2) = 2 * factorial(1)
                                                         factorial(1) = 1 [if loop activated]
*/

int fib(int n){
    if (n<2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

/*
fib(4) = fib(3) + fib(2)
       = (fib(2) + fib(1)) + (fib(1) + fib(1)) [if loop activated]
*/

int main(){
    // Factorial of a number
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The term at position "<<a<<" in the fibonacci sequence is "<<fib(a)<<endl;
    return 0;
}