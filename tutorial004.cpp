// Operators in C++

#include<iostream>

using namespace std;

int main(){
    int a=3, b=4;
    cout<<"The value of a + b is "<<a+b<<endl;
    cout<<"The value of a - b is "<<a-b<<endl;
    cout<<"The value of a * b is "<<a*b<<endl;
    cout<<"The value of a / b is "<<a/b<<endl;
    cout<<"The value of a % b is "<<a%b<<endl;
    cout<<"The value of a ++ is "<<a++<<endl; // After this line a = 5 (Print, then increase)
    cout<<"The value of a -- is "<<a--<<endl; // After this line a = 4 (Print, then decrease)
    cout<<"The value of ++a is "<<++a<<endl; // On this line a = 5 (Increase, then print)
    cout<<"The value of --a is "<<--a<<endl; // (Decrease, then print)
    cout<<endl;
    // Assignment operators. Assign values to variables.
    //int a=3;
    //char d='d';

    // Comparison operator
    cout<<"The value of a==b is "<<(a==b)<<endl;
    cout<<"The value of a!=b is "<<(a!=b)<<endl;
    cout<<"The value of a>=b is "<<(a>=b)<<endl;
    cout<<"The value of a<=b is "<<(a<=b)<<endl;
    cout<<"The value of a>b is "<<(a>b)<<endl;
    cout<<"The value of a<b is "<<(a<b)<<endl;
    cout<<endl;

    // Logical operator
    cout<<"The value of (a==b) AND (a<b) is "<<((a==b) && (a<b))<<endl;
    cout<<"The value of (a==b) OR (a<b) is "<<((a==b) || (a<b))<<endl;
    cout<<"The value of NOT (a==b) is "<<(!(a==b))<<endl;
    return 0;
}