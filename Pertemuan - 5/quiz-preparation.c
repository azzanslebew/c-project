#include <stdio.h>

int main()
{
    int price;
    int total;
    int rental_duration;

    printf("Enter rental duration: ");
    scanf("%d", &rental_duration);

    if (rental_duration < 7)
    {
        price = 1000;
    }
    else
    {
        price = 2000;
    }

    total = price * rental_duration;
    printf("Total cost is: %d", total);

    return 0;
}