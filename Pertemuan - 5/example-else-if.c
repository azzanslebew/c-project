#include <stdio.h>

int main()
{
    int score = 85;

    if (score >= 90)
    {
        printf("Your grade: A");
    }
    else if (score >= 80)
    {
        printf("Your grade: B");
    }
    else if (score >= 70)
    {
        printf("Your grade: C");
    }
    else
    {
        printf("Your grade: D");
    }

    return 0;
}