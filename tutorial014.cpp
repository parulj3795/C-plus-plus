#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// A way to swap variables. THIS WON'T WORK.
// Similar to copying a file and sharing it with someone. Any changes made in the file won't affect the another since they are independent.
void swap(int a, int b){    // temp     a       b
    int temp = a;           // 4        4       5
    a = b;                  // 4        5       5
    b = temp;               // 4        5       4
}

// BUT THIS WILL, because it uses addresses through pointers.
// Call by reference using pointers.
// Similar to sharing the link of a file which is shared on a common cloud (google drive). Any changes made would be reflected to everyone with a link.
void swapPointer(int* a, int* b){    // temp     a       b
    int temp = *a;                   // 4        4       5
    *a = *b;                         // 4        5       5
    *b = temp;                       // 4        5       4
}

// Call by reference using C++ reference variables.
// void cannot return a variable. 
void swapRefVar(int &a, int &b){    // temp     a       b
    int temp = a;                   // 4        4       5
    a = b;                          // 4        5       5
    b = temp;                       // 4        5       4
}

// To return a variable change to int. To return an address change to int &
int & swapRefVar2(int &a, int &b){    // temp     a       b
    int temp = a;                   // 4        4       5
    a = b;                          // 4        5       5
    b = temp;                       // 4        5       4
    return a;
}

int main(){

    int a=4,b=6;
    cout<<"Sum is "<<sum(a,b)<<endl;

    cout<<"INITIALLY: Value of a is "<<a<<" and value of b is "<<b<<endl;
    swap(a,b);
    cout<<"SWAP:Value of a is "<<a<<" and value of b is "<<b<<endl;
    swapPointer(&a,&b);
    cout<<"SWAPPOINTER: Value of a is "<<a<<" and value of b is "<<b<<endl;
    swapRefVar(a,b);
    cout<<"SWAPREFVAR: Value of a is "<<a<<" and value of b is "<<b<<endl;
    swapRefVar2(a,b) = 436; // Will change the value stored at a which is being returned by the function.
    cout<<"SWAPREFVAR2: Value of a is "<<a<<" and value of b is "<<b<<endl;
    return 0;
}