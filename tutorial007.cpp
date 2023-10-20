#include<iostream>

using namespace std;

int main(){

    // Selection control sequence - if else
    int age;
    cout<<"Age? "<<endl;
    cin>>age;

    if((age<18) && (age>0)){
        cout<<"Underage!"<<endl;
    }
    else if(age>=18){
        cout<<"Get the pass."<<endl;
    }
    else if(age<0){
        cout<<"Not allowed."<<endl;
    }

    // Selection control structure - switch case
    switch (age)
    {
    case 18:
        cout<<"You are 18.";
        break;

    case 0:
        cout<<"You are too young.";
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    return 0;

}
