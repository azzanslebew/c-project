#include <stdio.h>

int main()
{
    int choice;

    printf("=== MENU ===\n");
    printf("1. Iced Tea\n");
    printf("2. Orange Juice\n");
    printf("3. Coffee\n");
    printf("4. Milk\n");

    printf("Enter menu code (1-4): ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Menu : Iced Tea\n");
        printf("Price : Rp 5.000\n");
        break;
    case 2:
        printf("Menu : Orange Juice\n");
        printf("Price : Rp 7.000\n");
        break;
    case 3:
        printf("Menu : Coffee\n");
        printf("Price : Rp 10.000\n");
        break;
    case 4:
        printf("Menu : Milk\n");
        printf("Price : Rp 12.000\n");
        break;

    default:
        printf("Invalid menu code!");
    }

    return 0;
}