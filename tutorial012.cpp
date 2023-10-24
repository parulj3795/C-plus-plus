#include<iostream>
using namespace std;

// Structure - user defined data type which has different type of elements
struct employee // typedef struct employee - for constructing an abbreviation
{
    int eID;        // 4 bytes
    char favChar;   // 1 bytes
    float salary;   // 4 bytes
    // Total 9 bytes used for one structure

};  // } ep;

// Union - can only set one of the data types. Optimizes memory by sharing memory among all listed data types (int chat float).
union money
{
    int rice;       // 4 bytes
    char car;       // 1 bytes
    float pounds;   // 4 bytes
    // Allocates 4 bytes for memory for all.
};

int main(){ 
    struct employee parul; // ep parul;
    parul.eID = 1;
    parul.salary = 1234869;
    parul.favChar = 'f';

    cout<<parul.salary<<endl;

    union money m1;
    m1.rice = 324;
    cout<<m1.rice<<endl;
    m1.car='s'; // Overwrites the value of m1.rice because memory can only be used by any one variable at a time.
    cout<<m1.rice<<endl; // Will be incorrect since it is updated with m1.car
    cout<<m1.car<<endl;

    // Enum - enumerates elements inside {}
    enum Meal{breakfast, lunch, dinner};
    Meal m2 = breakfast;
    cout<<m2<<endl;
    cout<<lunch<<endl;
    cout<<(dinner==2)<<endl; // 0 = False, 1 = True
    cout<<(m2==2)<<endl; // 0 = False, 1 = True
    
    return 0;
}