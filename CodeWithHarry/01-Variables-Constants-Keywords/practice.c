#include<stdio.h>
/* 
Write a C program to calculate area of a rectangle:
a. Using hard coded inputs.
b. Using inputs supplied by the user.
*/
int area_rectangle1 ();
int area_rectangle2 ();
/*
Calculate the area of a circle and modify the same program to calculate the
volume of a cylinder given its radius and height.
*/
int area_circle ();
int volume_cylinder ();
/*
Write a program to convert Celsius (Centigrade degrees temperature to
Fahrenheit).
*/
int celsius_to_fahrenheit ();
/*
Write a program to calculate simple interest for a set of values representing
principal, number of years and rate of interest.
*/
int calculate_simple_interest ();



int area_rectangle1 () {
    int length = 5, breadth = 6, area;
    area = length * breadth;
    printf("The area of the rectangle is: %d", area);
    return 0;
}

int area_rectangle2 () {
    int length, breadth, area;
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("The area of the rectangle is: %d", area);
    return 0;
}

int area_circle () {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14 * radius * radius;
    printf("The area of the circle is %.2f", area);
    return 0;
}

int volume_cylinder () {
    float radius, area, height;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);
    area = 3.14 * radius * radius * height;
    printf("The volume of the cylinder is %.2f", area);
    return 0;
}

int celsius_to_fahrenheit () {
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("The temperature in Fahrenheit is: %.2f", fahrenheit);
    return 0;
}

int calculate_simple_interest () {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the rate amount: ");
    scanf("%f", &rate);
    printf("Enter the time amount: ");
    scanf("%d", &time);
    interest = (principal * rate * time) / 100;
    printf("The interest is %.2f", interest);
    return 0;
}

int main () {
    // area_rectangle1();
    // area_rectangle2();
    // area_circle();
    // volume_cylinder();
    // celsius_to_fahrenheit();
    // calculate_simple_interest();
    return 0;
}