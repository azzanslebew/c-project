#include <stdio.h>
int main()
{
    int pin;
    int balance = 1000000;
    int withdraw;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if (pin == 1234) // First check: correct PIN?
    {
        printf("Login successful.\n");
        printf("Enter withdrawal amount: ");
        scanf("%d", &withdraw);

        if (withdraw <= balance) // Second check: enough balance?
        {
            if (withdraw % 50000 == 0) // Third check: multiple of 50k?
            {
                balance = balance - withdraw;
                printf("Withdrawal successful!\n");
                printf("Remaining balance: Rp %d\n", balance);
            }
            else
            {
                printf("Error: Amount must be a multiple of Rp 50,000");
            }
        }
        else
        {
            printf("Error: Insufficient balance");
        }
    }
    else
    {
        printf("Error: Wrong PIN.\n");
    }

    return 0;
}