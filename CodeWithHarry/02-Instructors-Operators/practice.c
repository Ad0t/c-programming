#include<stdio.h>
/*
Which of the following is invalid in C?
a. int a=1; int b = a;
b. int v = 3*3;
c. char dt = ‘21 dec 2020’;

ANSWER: C
*/

/*
What data type will 3.0/8 – 2 return?
*/
int queso2 ();
/*
Write a program to check whether a number is divisible by 97 or not.
*/
void queso3 ();
/*
Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1

ANSWER:
3*x/y - z + k; x = 2, y = 3, z = 3, k = 1
3*2/3 - 3 + 1
6/3 - 3 + 1
2 - 3 + 1
2 - 4
-2
*/
/*
3.0 + 1 will be:
a. Integer.
b. Floating point number.
c. Character.

ANSWER: floating point
*/


int queso2 () {
    float a = 3.0/8 - 2;
    printf("%f", a);
}

void queso3 () {
    int t;
    scanf("%d", &t);
    if (t % 97 == 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
}

int main () {
    // queso2();
    return 0;
}