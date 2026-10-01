#include <stdio.h>

int main ()
{
    // Variable Declare
    int side, area, perimeter;

    // Assign side value
    side = 10;

    // Calculate area and perimeter
    area = side * side;
    perimeter = 4 * side;

    // Output results
    printf("Area of square = %d\n", area);
    printf("Perimeter of square = %d", perimeter);

    return 0;
}
