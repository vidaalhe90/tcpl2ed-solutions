
/* Exercise 1-5.
 * Modify the temperature conversion program to print the table
 * in reverse order, that is, from 300 degrees to 0. */

#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    int upper, lower, step;

    // Set initial values for upper, lower, and step.
    upper = 300;
    lower = 0;
    step = 20;

    // Compute and print celsius values for fahr = 300, 280, ..., 0.
    fahr = upper;
    while (fahr >= lower)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }

    return 0;
}
