#include<iostream>
using namespace std;

int main()
{
    int a = 10;

    // Poiter to int 
    int *ptr1 = &a;

    // Pointer to pointer (double pointer)
    int **ptr2 = & ptr1;

    // Accessing values using all three
    printf("a: %d\n", a);
    printf("ptr1: %d\n", *ptr1);
    printf("ptr2: %d\n", **ptr2);

    return 0;
}