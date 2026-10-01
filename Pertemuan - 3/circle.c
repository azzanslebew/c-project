#include <stdio.h>

int main ()
{
    // Variable Declare
    int radius;
    float area;

    // Assign radius value
    radius = 17;

    // Calculate area
    area = 3.14 * radius * radius;

    // Output result
    printf("Area of circle = %.2f", area);

    return 0;

    // Why i'm choose float data type for area?
    // Because value of phi is float 3.14
}
