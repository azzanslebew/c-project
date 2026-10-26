#include <stdio.h>

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            printf("i=%d j=%d \n", i, j);
        }
    }

    int rows = 4, cols = 6;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}