#include <stdio.h>

int main()
{
    int i = 20;

    printf("Bilangan genap dari 20 hingga 2:\n");

    do
    {
        printf("%d ", i);
        i -= 2;
    } while (i >= 2);

    return 0;
}