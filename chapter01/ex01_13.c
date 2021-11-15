
/**Exercise 1-13.
 * Write a program to print a histogram of the lenghts of words in
 * its input. It is easy to draw the histogram with the bars horizontal;
 * a vertical orientation is more challenging. **/

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0
#define MAX_WORD_LENGTH 100

int main(void)
{
    int i, j;
    int c, state;
    int lenghts[MAX_WORD_LENGTH + 1];

    // Intialize lenghts array.
    for (i = 0; i <= MAX_WORD_LENGTH; i++) { lenghts[i] = 0; }

    // Compute lenghts of entered words.
    i = 0;
    state = OUT_WORD;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            i++;
            state = IN_WORD;
        }
        else if (state == IN_WORD)
        {
            lenghts[i] += 1;
            i = 0;
            state = OUT_WORD;
        }
    }

    // Print histograms of lenghts.
    printf("\n==== Histogram of the length (n) of words ====\n");
    printf("----------------------------------------------\n");
    printf("  n  |                    count               \n");
    printf("----------------------------------------------\n");
    for (i = 1; i <= MAX_WORD_LENGTH; i++)
    {
        if (lenghts[i] != 0)
        {
            printf("%4d |", i);
            for (j = 1; j <= lenghts[i]; j++) { printf("*"); }
            printf("\n");
        }
    }

    return 0;
}
