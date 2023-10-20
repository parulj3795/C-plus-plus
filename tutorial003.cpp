# include<iostream>

using namespace std;

int main()
{
    int num1, num2;
    cout<<"Enter the value of num 1: "; /* '<<' is insertion operator */
    cin>>num1; /* '>>' is extraction operator */

    cout<<"Enter the value of num 2: "; 
    cin>>num2;

    cout<<"The sum is "<< num1+num2 <<"\n";

    return 0;
}
