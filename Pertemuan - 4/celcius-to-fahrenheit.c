#include <stdio.h>

int main()
{
    float celcius, fahrenheit;

    printf("Enter temperature in Celcius: ");
    scanf("%f", &celcius);

    fahrenheit = celcius * 1.8 + 32;

    printf("Temperature in Fahrenheit is: %.2f", fahrenheit);

    return 0;
}

// PSEUDOCODE

// PROGRAM Celsius_to_Fahrenheit_Conversion
// {The program is used to convert temperature from Celsius to Fahrenheit}

// DECLARATION
//     celcius: float
//     fahrenheit: float

// ALGORITHM
//     write("Enter temperature in Celcius: ")
//     read(celcius)
//     fahrenheit <- celcius * 1.8 + 32
//     write("Temperature in Fahrenheit is: ", fahrenheit)