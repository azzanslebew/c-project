#include <stdio.h>

int main()
{
    int distance;

    printf("--- TRAVEL ADVISOR ---\n");

    printf("Enter distance (km): ");
    scanf("%d", &distance);

    if (distance < 2)
    {
        printf("Recommended: Walk\n");
    }
    else if (distance < 10)
    {
        printf("Recommended: Ride a bike\n");
    }
    else if (distance < 100)
    {
        printf("Recommended: Take a bus\n");
    }
    else
    {
        printf("Recommended: Take a plane\n");
    }

    return 0;
}