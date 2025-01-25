#include<stdio.h>

int gcd_brute (int a, int b);
// less code and more iteration
int gcd_opti (int a, int b);
// more code and less iteration
int lcm (int a, int b);
// uses the formula [a*b]/gcd(a, b)

int gcd_brute (int a, int b) { 
    if (b == 0) {
        return a;
    }
    return gcd_brute (b, a % b);
}

int gcd_opti (int a, int b) {
    if (b == 0) {
        return a;
    } else if (a == 0) {
        return b;
    } else if (a > b) {
        return gcd_opti (b, a % b);
    } else {
        return gcd_opti (a % b, b);
    }
}

int lcm (int a, int b) {
    return (a * b) / gcd_opti (a, b);
}

int main () {

    return 0;
}