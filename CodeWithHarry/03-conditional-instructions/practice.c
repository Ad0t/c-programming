#include<stdio.h>

/*
What will be the output of this program
int a = 10;
if (a = 11)
printf("I am 11");
else
printf("I am not 11");

ANSWER: I am 11
*/
/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/
void grade ();
/*
Calculate income tax paid by an employee to the government as per the slabs
mentioned below:
    Income Slab     Tax
    2.5 – 5.0L      5%
    5.0L - 10.0L    20%
    Above 10.0L     30%
Note that there is no tax below 2.5L. Take income amount as an input from the user.
*/
void incomeTax ();
/*
Write a program to find whether a year entered by the user is a leap year or not. Take year as an input from the user.
*/
void leapYear ();
/*
Write a program to determine whether a character entered by the user is
lowercase or not.
*/
void isLowercase ();
/*
Write a program to find greatest of four numbers entered by the user.
*/
void greatest ();



void grade () {
    int marks[3], total = 0, i, pass = 0;
    float percentage;
    printf("Enter marks of three subjects: ");
    for (i = 0; i < 3; i++) {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 3; i++) {
        total += marks[i];
    }
    percentage = total / 300 * 100;
    if (percentage >= 40 && marks[0] >= 33 && marks[1] >= 33 && marks[2] >= 33){
        printf("You have passed the exam.\n");
    } else {
        printf("You have not passed the exam.\n");
    }
}

void incomeTax () {
    float income, tax = 0.0, slab1 = 2.5, slab2 = 5.0, slab3 = 10.0;
    printf("Enter your income: ");
    scanf("%f", &income);
    income = income/100000;
    if (income <= slab1) {
        tax = 0.0;
    } else if (income <= slab2) {
        tax = 0.05 * (income - slab1);
    } else if (income <= slab3) {
        tax = 0.05 * (slab2 - slab1) + 0.2 * (income - slab2);
    } else {
        tax = 0.05 * (slab2 - slab1) + 0.2 * (slab3 - slab2) + 0.3 * (income - slab3);
    }
    printf("Your income tax is: %.2f", tax*100000);
}

void leapYear () {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 != 0)) {
        printf("IS LEAP YEAR");
    } else {
        printf("IS NOT LEAP YEAR");
    }
}

void isLowercase () {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("%c is lowercase letter.", ch);
    } else {
        printf("%c is not lowercase letter.", ch);
    }
}

void greatest () {
    int num[4];
    for (int i = 0; i < 4; i++) {
        printf("Enter number: ");
        scanf("%d", &num[i]);
    }
    int max = num[0];
    for (int i = 0; i < 4; i++) {
        if (num[i] > max) {
            max = num[i];
        }
    }
    printf("%d", max);
}

int main () {

}