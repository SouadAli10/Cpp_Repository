# Cpp_Training

std is an example of a namspace which is a grouping of code. Goup codes to prevent naming conflict

C++ is a static typed language 

iostream input output stream

must always end the line with a semi colon or we would have an error

How to prevent naming conflicts namespaces <namespace>:: / using namespace <namepace> / using <namespace>::cout

cout is used to reach the console like console.log() 

in iostream ostream instant is used as a cokie cutter that works as a class that gives raise to an object that we are using in oop 

operatiors are the symbols that promotes an action 

most of the functions that are used in C like the printf()can be used in C++

using << multiple times can help with string contactination 

the arrows direct the data flow 

C++ is case sensetive

### Styling Convention
indent after a curly braces is added this would help later when loops are introduced 
C++ compiler ignore whitespaces 
Comments is added by adding // for single line comment /* */ are for multiline comments

### Functions in C++ 
the main function is called as soon as the program is ran 

include cmath to include mathmatical function 

Void functions does not return a value but it does a certian operation 

### Data Types 

integral data types include 4 main one short, int, long and long long. All of these have an unsigned counter types

sizeof is an operator that is used to detect the size  of data in a specific system.

using float is not usually prefered except when you are having memory restrictions

const declaration is prefered over  using the #define method that was used in C

The dot operator helps in attaching functions to objects

C string is used for backward compatibilty for C 

The string object in C++ returns a group of characters  taht are arranged in a specific order

String in C++ is a class that has members 

In case of using user input for string classes cin only grabs the first element of the string

### Control Flow
include branching (if statments and switches) and looping

### Collection Types
Their are 3 basic types of collection types mainly it include arrays(staticlly sized), vectors (dynamically sized) and templetized arrayes

passing an array into a function would make it loss its sense of size often times the array appears as a pointer when the sizeof() is applied

vector must be compiled with c++ 11. The size of vectors are not lost when passed to a function.

Passing vectors can either done by value or referance. Passing by referance is done when by adding a & before the vector name in the function. Passing by value is not recommended when you have a large array that would need to be copied which increase the memory requirment in the app.

Range based for loop is good to use when you want to pass through  all the elements in a specific collection. It also shows problem when dealing with C style arrays that are passed as a param in a function where these types of arrays decay into pointers and loss their size.

A matrix is a multidimentional array, vector or templetized arrayes

### Make File
Is a file that help to automate c++ compilation and runing 