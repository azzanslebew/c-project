#include <stdio.h>

int main()
{
    int age;
    int income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your income: ");
    scanf("%d", &income);

    // Check eligibility conditions
    if (age >= 21 && income >= 3000000)
    {
        printf("You are eligible for credit");
    }
    else
    {
        printf("Sorry, you don't meet the requirements");
    }

    return 0;
}