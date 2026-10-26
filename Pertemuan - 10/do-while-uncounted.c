#include <stdio.h>

int main()
{
    char letter;
    letter = 'Y';
    printf("--- Character Loop Control Program-\n");
    do
    {
        printf("Enter a letter (Y/N): ");
        scanf(" %c", &letter);
    } while (letter == 'Y');
    printf("\nLoop finished. Program stopped.\n");
    return 0;
}