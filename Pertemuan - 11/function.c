#include <stdio.h>

// Function definition that returns a double precision floating-point value
double calculateRectangleArea(double length, double width)
{
    return length * width;
}

int main()
{
    double length = 12.5;
    double width = 4.0;
    // Call the function and store its return value in 'area'
    double area = calculateRectangleArea(length, width);
    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Calculated Area: %.2f\n", area);
    return 0;
}