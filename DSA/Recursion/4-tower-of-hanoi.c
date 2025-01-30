#include<stdio.h>
#include<string.h>


void towerOfHanoi (int n, char src, char aux, char des);


void towerOfHanoi (int n, char src, char aux, char des) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n-1, src, des, aux);
    printf("Move disk %d from rod %c to rod %c\n", n, src, des);
    towerOfHanoi(n-1, aux, src, des);
}

int main () {
    towerOfHanoi(3, 'S', 'H', 'D');
    return 0;
}

/*
(3, S, A, D)
(2, S, D, A)
(1, S, A, D)

*/