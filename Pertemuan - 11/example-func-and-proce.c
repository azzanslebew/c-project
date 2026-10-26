#include <stdio.h>

// Function Prototypes
int isEven(int n);
void printResult(int status);

int main()
{
    int num1 = 4;
    int num2 = 7;

    // Test 1: Storing return value in a variable
    int status1 = isEven(num1);
    printf("Checking %d\n", num1);
    printResult(status1);

    // Test 2: Passing function call directly as argument
    printf("\nChecking %d:\n", num2);
    printResult(isEven(num2));
    return 0;
}

// Function: Returns 1 if even, 0 if odd
int isEven(int n)
{
    if (n % 2 == 0)
    {
        return 1;
    }
    return 0;
}

// Procedure: Prints output based on the returned status
void printResult(int status)
{
    if (status == 1)
    {
        printf("Result: The number is EVEN.\n");
    }
    else
    {
        printf("Result: The number is ODD.\n");
    }
}