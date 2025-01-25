#include<stdio.h>

/*
Write a program to print the address of a variable. Use this address to get the
value of the variable.
*/
void queso1 ();
/*
Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?
*/
int queso2 (int *ptr);
/*
Write a program to change the value of a variable to ten times of its current
value.
*/
void queso3 (int *a);
/*
Write a function and pass the value by reference.
*/
/*
Write a program using a function which calculates the sum and average of two
numbers. Use pointers and print the values of sum and average in main().
*/
int *sum (int a, int b);
float *avg (int a, int b);
/*
Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
*/
void queso5 ();
/*
Try problem 3 using call by value and verify that it does not change the value of the said variable.
*/

void queso1 () {
    int x = 10;
    int *ptr = &x;
    printf("Address of %d as pointer: %p\n", x, &x);
    printf("Value at %p is %d\n", ptr, *ptr);
    printf("Address of %d as unsigned digit: %u\n", x, &x);
    printf("Value at %u is %d\n", ptr, *ptr);
    queso2(ptr);
}
int queso2 (int *ptr) {
    printf("OTHER FUNCTION:\nValue at %u is %d\n", ptr, *ptr);
    return 0;
}
void queso3 (int *a) {
    *a = *a * 10;
}
int *sum (int a, int b) {
    int sum = a + b;
    int *ptr = &sum;
    printf("The sum is %d\n", sum);
    return ptr;
}
float *avg (int a, int b) {
    float avg = (a + b)/2.0;
    float *ptr = &avg;
    printf("The avg is %.2f\n", avg);
    return ptr;
}
void queso5 () {
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    printf("%u -> %d\n", ptr1, *ptr1);
    printf("%u -> %u -> %d\n", ptr2, *ptr2, **ptr2);
}

int main () {
    // queso1 ();
    // int i = 10;
    // printf("The value of i: %d\n", i);
    // queso3 (&i);
    // printf("The value of i after function call: %d\n", i);
    // int *sum_ptr = sum(10, 20);
    // printf("The value of sum_ptr %u: %d\n",sum_ptr, *sum_ptr);
    // float *avg_ptr = avg(10, 20);
    // printf("The value of avg_ptr %u: %.2f\n", avg_ptr, *avg_ptr);
    queso5();
}