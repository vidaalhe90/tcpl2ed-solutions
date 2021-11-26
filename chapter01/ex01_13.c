
// Exercise 1-13.
// Write a program to print a histogram of the lenghts of words in
// its input. It is easy to draw the histogram with the bars horizontal;
// a vertical orientation is more challenging.

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0
#define MAX_LENGTH 100

int main(void)
{
    int i, j;
    int c, status;
    int lenghts[MAX_LENGTH + 1];

    // Initialize lengths array.
    for (i = 0; i <= MAX_LENGTH; i++) lenghts[i] = 0;

    // Compute lengths of entered words.
    i = 0;
    status = OUT_WORD;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            i++;
            status = IN_WORD;
        }
        else if (status == IN_WORD)
        {
            lenghts[i]++;
            i = 0;
            status = OUT_WORD;
        }
    }

    // Print histogram of lengthss.
    printf("\n==== Histogram of the length (n) of words ====\n");
    printf("----------------------------------------------\n");
    printf("  n  |                    count               \n");
    printf("----------------------------------------------\n");
    for (i = 1; i <= MAX_LENGTH; i++)
    {
        if (lenghts[i] != 0)
        {
            printf("%4d |", i);
            for (j = 1; j <= lenghts[i]; j++) printf("*");
            printf("\n");
        }
    }
    
    return 0;
}
