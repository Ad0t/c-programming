#include<stdio.h>

long long int factorial (int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main () {
    printf("%d", factorial(15));
    return 0;
}