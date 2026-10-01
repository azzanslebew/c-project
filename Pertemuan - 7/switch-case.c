#include <stdio.h>

int main()
{
    int choice;

    printf("=== MENU ===\n");
    printf("1. Fried Rice\n");
    printf("2. Fried Noodles\n");
    printf("3. Chicken Satay\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("You ordered Fried Rice");
        break;
    case 2:
        printf("You ordered Fried Noodles");
        break;
    case 3:
        printf("You ordered Chicken Satay");
        break;
    default:
        printf("Sorry, that's not on the menu");
    }

    return 0;
}