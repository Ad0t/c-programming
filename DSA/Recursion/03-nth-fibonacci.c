#include<stdio.h>

int fibonacci1 (int n) {
    if (n <= 1) { 
        return 1;
    }
    return fibonacci1(n-1) + fibonacci1(n-2);
}

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Fibonacci number at position %d is %d", n, fibonacci1(n));
    return 0;
}