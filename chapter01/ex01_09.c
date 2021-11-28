
// Exercise 1-9.
// Write a program to copy its input to its output,
// replacing each string of one or more blanks by a single
// blank.

#include <stdio.h>

#define OUT_WORD 0
#define IN_WORD 1

int main(void)
{
    int c, status;

    status = OUT_WORD;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
        {
            putchar(c);
            status = IN_WORD;
        }
        else if (status == IN_WORD)
        {
            if (c == '\t')
            {
                c = ' ';
            }
            putchar(c);
            status = 0;
        }
    }
    
    return 0;
}
