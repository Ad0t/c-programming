#include <stdio.h>

int area1() {
    // Calculate the area of a rectangle using hardcoded inputs
    int length = 3, breadth = 6;
    printf("The area of the rectangle is %d\n", length * breadth);
    return length * breadth; // Return the calculated area
}

int area2() {
    // Calculate the area of a rectangle using inputs supplied by the user
    int length, breadth;
    printf("Enter length:\n");
    scanf("%d", &length);
    printf("Enter breadth:\n");
    scanf("%d", &breadth);
    printf("The area of the rectangle is %d\n", length * breadth);
    return length * breadth; // Return the calculated area
}

int area3() {
    // Calculate the area of a circle and cylinder
    double radius, height;
    printf("Enter radius: ");
    scanf("%lf", &radius); // Use %lf for double
    printf("Enter height: ");
    scanf("%lf", &height);
    
    double circle_area = 3.14 * radius * radius;
    double cylinder_area = 3.14 * radius * radius * height;

    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, circle_area);
    printf("The area of the cylinder with radius %.2lf and height %.2lf is %.2lf\n", radius, height, cylinder_area);

    return 0;
}

int main() {
    // Call each function to demonstrate functionality
    printf("Calling area1:\n");
    area1();

    printf("\nCalling area2:\n");
    area2();

    printf("\nCalling area3:\n");
    area3();

    return 0;
}
