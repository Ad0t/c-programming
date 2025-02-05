#include<stdio.h>

int gcd (int a, int b);
// less code and more iteration

int lcm (int a, int b);
// uses the formula [a*b]/gcd(a, b)

int gcd (int a, int b) { 
    if (b == 0) {
        return a;
    }
    return gcd (b, a % b);
}

int lcm (int a, int b) {
    return (a * b) / gcd(a, b);
}

int main () {
    // int x = ;
    // int y = lcm(13, 39);
    printf("GCD: %d\n", gcd(13, 39));
    // printf("%d", x);
    return 0;
}