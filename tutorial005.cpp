#include<iostream>

using namespace std;

int c = 45;

int main(){
    //************************************Built-in data types********************************************
    int a, b, c;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is "<<c<<endl;
    cout<<"The global c is "<<::c<<endl;

    float d=34.5; // By definition decimals are double. 34.4 is double by default. 34.5f would be float.
    long double e=345.54;
    cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    cout<<"The size of 34.5l is "<<sizeof(34.5l)<<endl;

    //************************************Reference variable********************************************
    float vbl = 455;
    float & y = vbl;
    cout<<vbl<<endl;
    cout<<y<<endl;

    //************************************Typecasting********************************************
    int a = 45;
    float b = 435.65;
    int c = int(b);

    cout<<"Value of a is "<<(float)a<<endl;
    cout<<"Value of b is "<<int(a)<<endl;
    cout<<"The sum is "<<(c+a+b)<<endl;

    return 0;
}