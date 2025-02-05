#include<stdio.h>
#include<math.h>

int reversingNumber (int n, int len) {
    if (n < 10) {
        return n;
    }
    return ((n%10)*pow(10, len-1) + reversingNumber(n/10, len - 1));
}

int main () {
    int x = reversingNumber(1234567, 7);
    printf("%d", x);
    return 0;
}