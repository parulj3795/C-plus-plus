/* BASIC STRUCTURE OF A C++ PROGRAM */
/* -------------------------------------------------------- */


/* 
A file iostream already exists. Use important things from this header file (iostream). They enhance the functionality of our program.
iostream: Helps in input and output. Eg. cout function. */
#include<iostream>

/* 
int: Integer 

main(): function. An ENTRY POINT for the code. Program will start with main, always. Can have more functions inside it. 
The entry point should always be called  main.

int main(): main() will get an integer value.

{ }: contains function body */
int main(){

    /* cout is inside a standard namespace, std. */
    /* "string is always inside double quotes." */
    std::cout<<"Hello World";

    /* return 0 implies successful termination of program. */
    return 0;
}