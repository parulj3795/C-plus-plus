#include<iostream>

using namespace std;

int main(){

    // For loop

    // for(initialisation; condition; updation)
    // {
    //    loop body;
    // }
    // 1. Initialise code
    // 2. Check condition
    // 3. Run loop
    // 4. Update 
    // 2 --> 3 --> 4 unit condition is satisfied.

    for (int i = 0; i < 4; i++)
    {
        cout<< i<<endl;
    }

    // While loop
    
    // while(condition)
    // {
    //     C++ statements;
    // }

    int i = 0;
    while (i<=4)
    {
        cout<<i<<endl;
        i++;
    }
    
    // Do-while loop. 

    // do
    // {
    //     C++ statements;
    // } while(condition);

    do{
        cout<<i<<endl;
        i++;
    }while(i<=4); // Irrespective of the condition the loop will atleast run once.

    // Multiplication table of 6

    for (int i = 0; i <= 10; i++)
    {
        cout<<i*6<<endl;
    }
    
}