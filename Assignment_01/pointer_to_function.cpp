#include<iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main()
{
    // Declare a function pointer that matches 
    // the signature of add() function
    int (*fptr)(int, int);

    // Assign address of add()
    fptr = &add;

    // Call the function via ptr
    printf("%d",fptr(20, 15));

    return 0;
}