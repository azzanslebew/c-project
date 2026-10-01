#include <stdio.h>

int main()
{
    int age;
    float weight;

    // Prompt user for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    // Display input results
    printf("---------------------------\n");
    printf("Age: %d years\n", age);
    printf("Weight: %.2f kg\n", weight);

    return 0;
}