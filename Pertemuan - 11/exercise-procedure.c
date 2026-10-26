#include <stdio.h>

void addition(int a, int b)
{
    int sum = a + b;
    printf("Hasil penjumlahan adalah: %d\n", sum);
}

void subtraction(int a, int b)
{
    int difference = a - b;
    printf("Hasil pengurangan adalah: %d\n", difference);
}

void multiplication(int a, int b)
{
    int product = a * b;
    printf("Hasil perkalian adalah: %d\n", product);
}

int main()
{
    addition(5, 3);
    subtraction(10, 4);
    multiplication(6, 7);

    return 0;
}