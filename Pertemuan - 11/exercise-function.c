#include <stdio.h>

int addition(int a, int b)
{
    int sum = a + b;
    return sum;
}

int subtraction(int a, int b)
{
    int difference = a - b;
    return difference;
}

int multiplication(int a, int b)
{
    int product = a * b;
    return product;
}

int main()
{
    int a = 5, b = 3;

    int addition_result = addition(a, b);
    printf("Hasil penjumlahan adalah: %d\n", addition_result);

    int subtraction_result = subtraction(a, b);
    printf("Hasil pengurangan adalah: %d\n", subtraction_result);

    int multiplication_result = multiplication(a, b);
    printf("Hasil perkalian adalah: %d\n", multiplication_result);

    return 0;
}