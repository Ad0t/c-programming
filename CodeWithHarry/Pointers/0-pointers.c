#include<stdio.h>

// function prototype
void explainPointer0();
void explainIntegerPointer();


// function defination
void explainPointer0 () {
    int m = 500;
    int *ptr = &m;
    printf("The value of variable m is: %d\n", m);
    printf("The memory address of variable m is: %p\n", &m);
    printf("The memory address of variable m using ptr is: %p\n", ptr);   // ptr = &m
    printf("The value of variable m using ptr is: %d\n", *ptr);   // *ptr = *(&ptr)

    char *s = "hello";
    printf("\nThe value of variable s is: %s\n", s);
    printf("The memory address of variable s is: %p\n", &s);    // &s = &(*"hello")
}
/*
A pointer is A VARIABLE THAT STORES THE *MEMORY ADDRESS* OF ANOTHER VARIABLE.
Instead of holding a direct value, it holds the address where the value is stored in memory.
There are 2 important operators that we will use in pointers concepts i.e.

ADDRESS OF(&)
Address operator(&) used to returns the address of a variable or to access the address of a variable to a pointer.
VALUE AT ADDRESS(*)
Dereferencing operator(*) used to declare pointer variable and access the value stored in the address.

%p format specifier is used to print the address stored in pointer variables.
Printing a pointer with %d format specifier may result in a warning 
or undefined behaviour because the size of a pointer (usually 4 or 8 bytes) may not match that of an integer.
The memory address format will always be in hexadecimal format(starting with 0x).
Pointers are essential for dynamic memory allocation, providing control over
memory usage with functions like malloc, calloc, and free.
*/

void explainIntegerPointer () {

}



int main () {
    explainPointer0();
    return 0;
}
