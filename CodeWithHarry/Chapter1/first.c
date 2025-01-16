#include<stdio.h>

void explainDatatypes () {
    int a = 10;

    float b = 1.4;

    char c = 'a';
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    /*
    %d for integers
    %f for real values (floating-point numbers)
    %c for characters
    */
   printf("Value of a: %d\n", a);
   printf("Value of b: %f\n", b);
   printf("Value of c: %c\n", c);
}

void explainVariables () {
    int a; // Variable declaration
    a = 6;
    printf("The output is %d", a);
}

void explainInput () {
    int a;
    scanf("%d", &a); // &a = address of a
    printf("The value of a is %d", a);
}

void explainEscapeSequence () {
    printf("Hello,\\n is a\nnew line \\t is a\t tab space");
}

int main () {
    explainEscapeSequence();
    return 0;
}