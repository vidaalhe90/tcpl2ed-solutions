
/* Exercise 1-9.
 * Write a program to copy its input to its output,
 * replacing each string of one or more blanks by a single
 * blank. */

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
            if (c == '\t') { c = ' '; }
            printf("%c", c);
            state = OUT_WORD;
        }
    }

    return 0;
}
