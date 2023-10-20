// Type newclear for C++ snippet

#include<iostream>
using namespace std;
int main(){

    for (int i = 0; i < 10; i++)
    {
        if(i==2){
            break; // Break the loop here
        }
        cout<<i<<endl;
    }

    for (int i = 0; i < 10; i++)
    {
        if(i==2){
            continue; // Skip current iteration
        }
        cout<<i<<endl;
    }
    
    
    return 0;
}