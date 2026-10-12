
#include <stdio.h>

int main()
{
    float item_weight, discount_percentage;
    int shipping_distance, member_status, payment_amount, base_rate, discount, total_cost;

    printf("=============================================\n");
    printf("       ANTARCEPAT SHIPPING RATE APPLICATION");
    printf("\n=============================================\n");

    printf("Enter item weight (kg)          : ");
    scanf("%f", &item_weight);

    printf("Enter shipping distance (km)    : ");
    scanf("%d", &shipping_distance);

    if (shipping_distance < 30)
    {
        base_rate = 500 * shipping_distance;
    }
    else
    {
        base_rate = 400 * shipping_distance;
    }

    printf("Member Status (1=Yes, 0=No)     : ");
    scanf("%d", &member_status);

    if (member_status == 1)
    {
        if (item_weight > 10 && shipping_distance > 100)
        {
            discount_percentage = 0.15;
        }
        else
        {
            discount_percentage = 0.1;
        }
    }
    else
    {
        if (item_weight > 10 && shipping_distance > 100)
        {
            discount_percentage = 0.05;
        }
        else
        {
            discount_percentage = 0;
        }
    }

    discount = discount_percentage * base_rate;
    total_cost = base_rate - discount;

    printf("Enter payment amount (Rp)       : ");
    scanf("%d", &payment_amount);

    printf("\n=============================================\n");
    printf("              TRANSACTION DETAILS");
    printf("\n=============================================\n");

    printf("Item Weight                 : %.2f kg\n", item_weight);
    printf("Shipping Distance           : %d km\n", shipping_distance);
    printf("-----------------------------------------------\n");
    printf("Cost Before Discount        : Rp %d\n", base_rate);
    printf("Discount (%.0f%%)              : Rp %d\n", discount_percentage * 100, discount);
    printf("-----------------------------------------------\n");
    printf("Total Cost After Discount   : Rp %d\n", total_cost);
    printf("Payment Amount              : Rp %d\n", payment_amount);

    if (payment_amount < total_cost)
    {
        printf("Payment failed. Insufficient funds: Rp %d\n", total_cost - payment_amount);
    }
    else
    {
        printf("Change                      : Rp %d\n", payment_amount - total_cost);
    }

    printf("\n=============================================\n");
    printf("Thank you for using AntarCepat!");
    printf("\n=============================================\n");

    return 0;
}
