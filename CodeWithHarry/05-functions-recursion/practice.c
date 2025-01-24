#include<stdio.h>
/*
Write a program using function to find average of three numbers.
*/
void avgOfThree ();
/*
Write a function to convert Celsius temperature into Fahrenheit.
*/
void celsiusToFahrenheit ();
/*
Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.
*/
void forceOfAttraction ();
/*
Write a program using recursion to calculate nth element of Fibonacci series.
*/
void fibonacciSeries (int n, int arr[]);
/*
What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);

ANSWER: 4 5 4
*/
/*
6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
*/
int sumOfNaturalNumbers(int n);
/*
7. Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/
void printPattern(int n);


void avgOfThree () {
    float num1, num2, num3, avg;
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter third number: ");
    scanf("%f", &num3);
    avg = (num1 + num2 + num3) / 3;
    printf("Average of three numbers is: %.2f\n", avg);
}


void celsiusToFahrenheit () {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit is: %.2f\n", fahrenheit);
}

void forceOfAttraction () {
    float mass, force;
    printf("Enter mass of the body: ");
    scanf("%f", &mass);
    force = mass * 9.8;
    printf("Force of attraction is: %.2f\n", force);
}

void fibonacciSeries (int n, int arr[]) {
    if (n <= 0) {
        return;
    } else if (n == 1) {
        arr[0] = 0;
        return;
    } else if (n == 2) {
        arr[0] = 0;
        arr[1] = 1;
        return;
    } else {
        fibonacciSeries(n-1, arr);
        arr[n-1] = arr[n-2] + arr[n-3];
    }
}
int sumOfNaturalNumbers (int n) {
    if (n == 0) {
        return 0;
    }
    return n + sumOfNaturalNumbers(n-1);
}
void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*  ");
        }
        printf("\n");
    }
}

int main () {


    // int n = 20;
    // int arr[n];
    // fibonacciSeries(n, arr);
    // printf("Fibonacci Series up to %d terms:\n", n);
    // for (int i = 0; i < n; i++) {
    //     printf("%d ", arr[i]);
    // }
    // printf("\n");

    // int n = 5, sum;
    // sum = sumOfNaturalNumbers(n);
    // printf("Sum of first %d natural numbers is: %d\n", n, sum);
    printPattern(10);
}