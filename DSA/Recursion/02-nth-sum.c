#include<stdio.h>

// Iteration
int IsumOfN (int n);
// Recursion 
int RsumOfN (int n);

int IsumOfN (int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}
int RsumOfN (int n) {
    if (n < 1) {
        return 0;
    }
    return n + RsumOfN(n-1);
}

int main () {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is: %d\n", n, RsumOfN(n));
    printf("Sum of first %d natural numbers is: %d\n", n, IsumOfN(n));
    return 0;
}