
/* Exercise 1-4.
 * Write a program to print the corresponding
 * Celsius to Fahrenheit table. */

#include <stdio.h>

int main(void) {
    float celsius, fahr;
    int lower, upper, step;

    // Set initial values for lower, upper, and step.
    lower = 0;
    upper = 300;
    step = 20;

    // Compute and print fahr values for celsius = 0, 20, ..., 300.
    celsius = lower;
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    
    return 0;
}
