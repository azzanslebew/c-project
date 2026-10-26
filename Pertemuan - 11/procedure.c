#include <stdio.h>

// Procedure without parameters
void printHeader()
{
    printf("=========");
    printf(" GEOMETRY CALCULATION PROGRAM \n");
    printf("=================================\n");
}

// Procedure with parameters
void printRectangleDetails(double length, double width)
{
    double area = length * width;
    printf("Length: %.2f\n", length);
    printf("Width: %.2f\n", width);
    printf("Area : %.2f\n", area);
}

int main()
{
    // Calling a procedure without parameters
    printHeader();
    // Calling a procedure with parameters
    printRectangleDetails(10.0, 5.0);
    return 0;
}