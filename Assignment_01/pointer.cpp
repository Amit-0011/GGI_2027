#include<iostream>
using namespace std;

int main()
{
    // You can uncomment the code block by block and verify the output of the code that i have written in this code file 

    // 1st block of code 
    // // Normal Variable
    // int a = 15;

    // // Pointer Variable ptr that stores address of var
    // int *ptr = &a;

    // // Directly accessing ptr will give us an address
    // printf("%d",ptr); // 6422296


    // 2nd block of code
    // int b = 20;

    // // Stores address of b variable
    // int* ptr = &b;

    // // Deferencing ptr to access the value
    // printf("%d", *ptr);


    // 3rd block of code
    // int *ptr1;
    // char *ptr2;

    // // Finding size using sizeof()
    // printf("%zu\n", sizeof(ptr1)); // 4 
    // printf("%zu\n", sizeof(ptr2)); // 4


    // 4th block of code
    // Here i can give the example of special types pointer

    // // 01 Null Pointer
    // int *ptr = NULL;

    // // 02 Void Pointer
    // void *ptr;

    // // 03 Wild Pointer
    // int *ptr;

    // 04 Dangling Pointer
    int* ptr = (int*)malloc(sizeof(int));

    // After below free call, ptr becomes a dangling pointer
    free(ptr);
    printf("Memory freed\n");

    // removing Dangling Pointer
    ptr = NULL;


    return 0;
}