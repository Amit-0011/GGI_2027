#include<iostream>
using namespace std;

int main()
{

    int a = 90;
    int b = 50;

    // Creating a constant pointer
    int* const ptr = &a;

    // Trying to reassign it to b
    ptr = &b;

    // output: it will get this output error because constant will be not allow you to swap the values:
    // pointer_arithmatic.cpp: In function 'int main()':
    // pointer_arithmatic.cpp:14:12: error: assignment of read-only variable 'ptr'
    //  ptr = &b;
    //         ^



    // int a = 90;
    // int b = 50;

    // // Creating a  pointer
    // int*  ptr = &a;

    // // Trying to reassign it to b
    // ptr = &b;
    // printf("%d", *ptr);

    return 0;
}