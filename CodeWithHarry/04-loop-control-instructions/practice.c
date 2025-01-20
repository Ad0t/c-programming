#include<stdio.h>

/*
Write a program to print multiplication table of a given number n.
*/
void multiplicationTableN ();
/*
Write a program to print multiplication table of 10 in reversed order.
*/
void multiplicationTable10Reversed ();
/*
A do while loop is executed:
a. At least once.
b. At least twice.
c. At most once.
*/
void whileLoopingOnce ();
void whileLoopingTwice ();
void whileLoopingJustOnce ();
/*
What can be done using one type of loop can also be done using the other two
types of loops – true or false?
True
*/
/*
Write a program to sum first ten natural numbers using while loop.
*/
void sumFirstTenNaturalNumbersWhile ();
/*
Write a program to implement previous program using ‘for’ and ‘do-while’ loop.
*/
void sumFirstTenNaturalNumbersFor();
void sumFirstTenNaturalNumbersDoWhile();
/*
Write a program to calculate the sum of the numbers occurring in the
multiplication table of 8. (consider 8 x 1 to 8 x 10).
*/
void sumMultiplicationTable8();
/*
Write a program to calculate the factorial of a given number using a for loop.
*/
void factorialUsingFor();
/*
Repeat previous question using while loop.
*/
void factorialUsingWhile();
/*
Write a program to check whether a given number is prime or not using loops.
*/
void checkPrimeNumberFor();
/*
Implement previous question using other types of loops.
*/
void checkPrimeNumberWhile();


void multiplicationTableN () {
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d", n, i, i*n);
    }
} 
void multiplicationTable10Reversed () {
    int n = 10, i, j;
    for (i = 10; i >= 1; i--) {
        printf("%d x %d = %d", n, i, i*n);
    }
}
void whileLoopingOnce () {
    int i = 1;
    do {
        printf("Hello\n");
        i++;
    } while (i <= 5);
}
void whileLoopingTwice () {
    int i = 1;
    do {
        printf("Hello\n");
        i++;
    } while (i <= 2);
}
void whileLoopingJustOnce () {
    int i = 1;
    do {
        i++;
        printf("Hello\n");
    } while (i > 5);
}
void sumFirstTenNaturalNumbersWhile () {
    int i = 1, sum = 0;
    while (i <= 10) {
        sum += i;
        i++;
    }
    printf("Sum of first 10 natural numbers is: %d\n", sum);
}
void sumFirstTenNaturalNumbersFor () {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("Sum of first 10 natural numbers is: %d\n", sum);
}
void sumFirstTenNaturalNumbersDoWhile() {
    int sum = 0, i = 0;
    do {
        sum += i;
        i++;
    } while (i <= 10);
    printf("Sum of first 10 natural numbers is: %d\n", sum);
}
void sumMultiplicationTable8() {
    int i = 1, sum = 0;
    while (i <= 10) {
        sum += i * 8;
    }
    printf("Sum of multiples of 8: %d\n", sum);
}
void factorialUsingFor() {
    int n, i, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        fact *= (i + 1);
    }
    printf("Factorial of %d is: %d\n", n, fact);
}
void factorialUsingWhile() {
    int n, i = 1, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (i<=n) {
        fact *= i;
    }
    printf("Factorial of %d is: %d\n", n, fact);
}
void checkPrimeNumberFor() {
    int n, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not prime number.\n", n);
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1;
            break;
        }
    }
    if (flag==1) {
        printf("%d is not prime number.\n", n);
    } else {
        printf("%d is prime number.\n", n);
    }
}
void checkPrimeNumberWhile() {
    int n, i = 2, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not prime number.\n", n);
        return;
        }
        while (i * i <= n) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
            i++;
        }
    return;
}


int main () {
    // sumFirstTenNaturalNumbersWhile();
    // sumFirstTenNaturalNumbersFor();
    // sumFirstTenNaturalNumbersDoWhile();
    return 0;
}