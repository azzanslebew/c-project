#include <stdio.h>

int main()
{
    int number = 1;
    while (number <= 5)
    {
        printf("Enter a number: ");
        scanf("%d", &number);
    }
    printf("Loop stopped.\n");
    return 0;
}