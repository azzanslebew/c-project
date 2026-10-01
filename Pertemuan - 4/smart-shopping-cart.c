#include <stdio.h>

int main()
{
    char item[50];
    float price, total;
    int qty;

    printf("--- RECEIPT ---\n");

    printf("Item: ");
    scanf("%s", &item);

    printf("Price per unit: $");
    scanf("%f", &price);

    printf("Quantity: ");
    scanf("%d", &qty);

    printf("---------------\n");

    total = price * qty;

    printf("Total Amount: $%.2f\n", total);
    printf("Thank you for shopping!");

    return 0;
}