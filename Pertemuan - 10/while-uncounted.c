#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter numbers (0 to stop): \n");
    scanf("%d", &num);
    while (num != 0)
    {
        sum = sum + num;
        scanf("%d", &num);
    }
    printf("Total = %d", sum);
    return 0;
}