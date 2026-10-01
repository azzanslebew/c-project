#include <stdio.h>

int main()
{
    char name[50];
    int age;

    // Output
    printf("Welcome to the Student Profile System!\n");

    // Input
    printf("Enter your name: ");
    scanf("%s", name); // Note: No '&' for string

    printf("Enter your age: ");
    scanf("%d", &age);

    // Output
    printf("\n--- Student Profile ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Next year you will be %d.\n", age + 1);

    return 0;
}