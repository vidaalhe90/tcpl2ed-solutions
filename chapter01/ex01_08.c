
/* Exercise 1-8.
 * Write a program to count blanks, tabs, and newlines. */

#include <stdio.h>

int main(void)
{
    int c;
    int nb, nt, nl;

    /* Count blanks, tabs, and newlines. */
    nb = nt = nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')  { nb++; }
        if (c == '\t') { nt++; }
        if (c == '\n') { nl++; }
    }

    /* Print results. */
    printf("blanks: %d\n", nb);
    printf("tabs:   %d\n", nt);
    printf("lines:  %d\n", nl);

    return 0;
}
