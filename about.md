**High level language:** Google >> Query --> Result. Logically sound and farther from hardware.

**Low level language:** Binary. Closer to hardware. C/C++ is a low level language because it allows memory mamagement. 

**Variables:** Containers for data storage. Variable names are case sensitive.

* Syntax for declaring variables in C++ 

    > data_type variable_name = value;

* Local variables: declared inside the braces of any function.
* Global variables: declared outside any function and can be accessed anywhere in the code.
* Local and global variables can have the same name.

**Data Types:** Multiple data types - int, float, char, double (higher precision than float), and boolean (true or false). Categories -
* Built-in - int, float, char, double, bool
* User-defined - strut, union, enum
* Derived - array, function, pointer

**I/O:** Sequence of bytes is called *stream*. 'iostream' works for input output stream. C++ has some reserved keywords which cannot be used as a variable name. 

**Header Files**: Two types - 
* System header files: Comes with compiler
* User defined files: Written by programmer.
    > #include "this.h" [this.h should be in the folder.]
* cppreference.com - bunch of prewritter header files

**C++ control structures**: Basic control structures
* Sequence - Enter program, perform action 1, perform action 2, ..., exit program
* Selection - Enter program, check the condition (Is age >18 --> True or False), if True -- perform action 1, if False -- perform action 2, exit
* Loop - Enter program, (IN LOOP) check condition, if true --> perform action 1, if false --> exit loop (or perform action 2)

How to implement control structures - 
* if-else statement
* if-elif-...-else ladder
* switch case

**Loops in C++**: Block of statements to repeatedly do something
* For
* While
* Do-While

> Be cautious of infinite loop!

**Pointer**: A data type. Type of variable which holds the address of other data types.
* Pointer arithmetic
* address(new) = address(current) + i * sizeof(datatype)
* p+1 = p + i*4 (for int data type)

**Array**: is a collection of items of similar type stored in contiguous memory locations.

