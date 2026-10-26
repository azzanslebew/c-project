#include <stdio.h>

int main()
{
    int sum = 0; // accumulator for the total
    printf("Even numbers from 1 to 10:\n");
    // Counted loop: iterate 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        // Selection: only process even numbers
        if (i % 2 == 0)
        {
            printf("%d", i);
            // display the even number
            sum += i; // ==> like sum = sum + i;
            // add it to the total
        }
    }
    printf("\n");
    printf("Total sum of even numbers = %d\n", sum);
    return 0;
}