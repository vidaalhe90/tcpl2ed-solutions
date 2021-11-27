
// Exercise 1-12.
// Write a program that prints its input one word per line.

#include <stdio.h>

#define IN_WORD 1
#define OUT_WORD 0

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
            putchar('\n');
            status = OUT_WORD;
        }
    }
    
    return 0;
}
