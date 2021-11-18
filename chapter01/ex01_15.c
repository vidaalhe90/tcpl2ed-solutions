
/* Exercise 1-15.
 * Rewrite the temperature conversion program of section 1.2 to
 * use a function for conversion. */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

/* toCelsius: function prototype. */
float toCelsius(float fahr);

/* main: begins program execution. */
int main(void) {
    float fahr, celsius;
    
    /* Compute celsiys for fahr = 0, 20, ..., 300. */
    for (fahr = LOWER; fahr <= UPPER; fahr += STEP) {
        celsius = toCelsius(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }

    return 0;
}

/* toCelsius: function definition. */
float toCelsius(float fahr) {
    return (5.0 / 9.0) * (fahr - 32.0);
}
