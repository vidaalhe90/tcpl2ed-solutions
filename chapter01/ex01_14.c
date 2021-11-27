
// Exercise 1-14.
// Write a program to print a histogram of the frequencies
// of different characters in its input.

#include <stdio.h>

#define NUM_PRINTABLE_CHARS '~' - ' ' + 1

int main(void)
{
    int i, j, c;
    int frequencies[NUM_PRINTABLE_CHARS];

    // Initialize frequencies array.
    for (i = 0; i < NUM_PRINTABLE_CHARS; i++) frequencies[i] = 0;

    // Compute frequencies for each entered printable char.
    while ((c = getchar()) != EOF) if (c >= ' ' && c <= '~') frequencies[c - ' ']++;

    // Print histogram of frequencies.
    printf("\n==== Histogram of frequencies (c) of characters ====\n");
    printf("-------------------------------------------------------\n");
    printf("  c  |                      count                      \n");
    printf("-------------------------------------------------------\n");
    for (i = 0; i < NUM_PRINTABLE_CHARS; i++)
    {
        if (frequencies[i] != 0)
        {
            printf("  %c  |", (i + ' '));
            for (j = 1; j <= frequencies[i]; j++) printf("*");
            printf("\n");
        }
    }
    
    return 0;
}
