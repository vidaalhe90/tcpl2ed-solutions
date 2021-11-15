

/* Exercise 1-12.
 * Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

int main(void)
{
    int c, state;

    state = OUT_WORD;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            printf("%c", c);
            state = IN_WORD;
        }
        else if (state == IN_WORD)
        {
            printf("\n");
            state = OUT_WORD;
        }
    }

    return 0;
}

