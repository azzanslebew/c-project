#include <stdio.h>

int main()
{
    int midterm, final_exam, assignment;
    float final_score;

    printf("--- PASSING GRADE CALCULATOR ---\n");

    printf("Enter midterm exam score (0-100): ");
    scanf("%d", &midterm);

    printf("Enter final exam score (0-100): ");
    scanf("%d", &final_exam);

    printf("Enter assignment score (0-100): ");
    scanf("%d", &assignment);

    printf("--------------------------------\n");

    final_score = (midterm * 0.3) + (final_exam * 0.4) + (assignment * 0.3);

    printf("Your Final Score: %.2f\n", final_score);

    if (final_score >= 70)
    {
        printf("Status: PASS\n");
    }
    else if (final_score >= 60 && final_score < 70)
    {
        printf("Status: REMEDIAL\n");
    }
    else
    {
        printf("Status: FAIL\n");
    }

    printf("Congratulations! Keep up the good work!");

    return 0;
}