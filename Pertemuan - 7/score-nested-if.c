#include <stdio.h>

int main()
{
    int score;

    printf("=== GRADE CALCULATOR ===\n");

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 0 && score <= 100)
    {
        if (score >= 85)
        {
            printf("Grade: A\n");
            printf("Description: Pass with honors!\n");
        }
        else if (score >= 70)
        {
            printf("Grade: B\n");
            printf("Description: Pass!\n");
        }
        else if (score >= 60)
        {
            printf("Grade: C\n");
            printf("Description: Pass!\n");
        }
        else if (score >= 50)
        {
            printf("Grade: D\n");
            printf("Description: Conditional Pass!\n");
        }
        else
        {
            printf("Grade: F\n");
            printf("Description: Fail!\n");
        }
    }
    else
    {
        printf("Invalid score!\n");
    }

    return 0;
}