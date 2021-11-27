
// Exercise 1-3.
// Modify the temperature conversion program to print a heading
// above the table.

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int lower, upper, step;

    // Set initial values for lower, upper, and step.
    lower = 0;
    upper = 300;
    step = 20;

    // Print header.
    printf("----------------------\n");
    printf("Fahrenheit - Celsius\n");
    printf("----------------------\n");
    
    // Compute and print celsius values for fahr = 0, 20, ..., 300.
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf(" %5.0f \t %10.1f \n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}
