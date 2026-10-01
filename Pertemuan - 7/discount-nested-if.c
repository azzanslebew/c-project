#include <stdio.h>

int main()
{
    int choice, total_purchase;

    printf("Membership status (1=yes, 0=no): ");
    scanf("%d", &choice);

    if (choice != 1 && choice != 0)
    {
        printf("Invalid membership status!\n");
        return 0;
    }

    printf("Total purchase: Rp ");
    scanf("%d", &total_purchase);

    if (choice == 1)
    {
        if (total_purchase >= 100000)
        {
            printf("Discount    : 20%%\n");
            printf("Total paid  : Rp %.2f\n", total_purchase - (total_purchase * 0.20));
        }
        else
        {
            printf("Discount    : 10%%\n");
            printf("Total paid  : Rp %.2f\n", total_purchase - (total_purchase * 0.10));
        }
    }
    else
    {
        if (total_purchase >= 100000)
        {
            printf("Discount    : 5%%\n");
            printf("Total paid  : Rp %.2f\n", total_purchase - (total_purchase * 0.05));
        }
        else
        {
            printf("No discount applied.\n");
            printf("Total paid  : Rp %.2f\n", (float)total_purchase);
        }
    }

    return 0;
}