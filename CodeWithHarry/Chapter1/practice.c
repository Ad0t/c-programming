#include<stdio.h>

int area1 () {
    // calculate area of a rectangle using hard coded inputs
    int length = 3, breadth = 6;
    printf("The area of the rectangle is %d", length*breadth);
    return 0;
}
int area2 () {
    // calculate area of a rectangle using inputs supplied by the user
    int length, breadth;
    printf("Enter length: ");
    scanf("%d \n", &length);
    printf("Enter breadth: ");
    scanf("%d \n", &breadth);
    printf("The area of the rectangle is %d\n", length*breadth);
    return 0;
}
int area3 () {
    // Calculate the area of a circle and cylinder
    float radius, height;
    printf("Enter radius: ");
    scanf("%lf", &radius); 
    printf("Enter height: ");
    scanf("%lf", &height); 

    double circle_area = 3.14 * radius * radius;
    double cylinder_area = 3.14 * radius * radius * height;

    printf("The area of the circle with radius %.2lf is %.2lf", radius, circle_area);
    printf("The area of the cylinder with radius %.2lf and height %.2lf is %.2lf", radius, height, cylinder_area);
    
    return 0;
}

int cel2fah () {
    float c = 37.0, f;
    f = (9.9/5.0)*c + 32;
    prinf("The value in fahrenheit is %.2lf", f);

    return 0;
}

int main () {
printf("Calling area1:\n");
    area1();

    printf("\nCalling area2:\n");
    area2();

    printf("\nCalling area3:\n");
    area3();
    return 0;
}