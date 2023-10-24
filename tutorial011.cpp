#include<iostream>
using namespace std;

int main(){
    int marks[] = {324,546,675,321};

    for (int i = 0; i <= 3; i++) // i = 3 will run the code into an infinite loop.
    {
        cout<<marks[i]<<endl;
    }

    marks[4] = 4666;

    cout<<"do-while loop"<<endl;
    int i = 0;
    do{
        cout<<marks[i]<<endl;
        i++;
    } while (i<=4);

    // Pointers and arrays

    int *p = marks;
    cout<<sizeof(p)<<endl;
    cout<<p<<endl;
    cout<<p+1<<endl;

    cout<<*(p++)<<endl; // prints p first then increases
    cout<<*p<<endl;
    cout<<*(++p)<<endl; // increase p first then print
    return 0;
}