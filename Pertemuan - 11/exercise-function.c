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
    int addition_result = addition(5, 3);
    printf("Hasil penjumlahan adalah: %d\n", addition_result);

    int subtraction_result = subtraction(10, 4);
    printf("Hasil pengurangan adalah: %d\n", subtraction_result);

    int multiplication_result = multiplication(6, 7);
    printf("Hasil perkalian adalah: %d\n", multiplication_result);

    return 0;
}