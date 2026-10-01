#include <stdio.h>

int main()
{
    int length, width, area;

    printf("===================================\n");
    printf("     RECTANGLE AREA CALCULATOR     \n");
    printf("===================================\n\n");

    printf("\n-----------------------------------\n");
    printf("Enter length (cm) : ");
    scanf("%d", &length);

    printf("Enter width (cm) : ");
    scanf("%d", &width);

    area = length * width;

    printf("Area of Rectangle (cm2) : %d\n", area);
    printf("-----------------------------------\n\n");

    printf("===================================\n");
    printf("     THANK YOU FOR USING THIS!     \n");
    printf("===================================\n\n");

    return 0;
}

