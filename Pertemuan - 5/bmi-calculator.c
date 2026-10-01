#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("--- BMI CALCULATOR ---\n");

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    printf("----------------------\n");

    bmi = weight / (height * height);

    printf("Your BMI: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("Category: Normal\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obese\n");
    }

    printf("Keep maintaining a healthy lifestyle!");

    return 0;
}