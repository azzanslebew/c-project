#include <stdio.h>

int main()
{
    int total_sheets, price_per_sheets, total_payment;
    char choice;

    do
    {
        printf("\nEnter number of photocopy sheets: ");
        scanf("%d", &total_sheets);

        if (total_sheets < 100)
        {
            price_per_sheets = 150;
        }
        else if (total_sheets >= 100 && total_sheets < 300)
        {
            price_per_sheets = 120;
        }
        else
        {
            price_per_sheets = 100;
        }

        printf("    >> Price per sheet  : Rp %d\n", price_per_sheets);

        total_payment = total_sheets * price_per_sheets;

        printf("    >> Total payment    : Rp %d\n", total_payment);

        printf("Do you want to repeat? (Y/N): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThank you for using the photocopy service!\n");

    return 0;
}