#include <stdio.h>

#define TABINC 8
#define EOF '\n'

int main ()
{
    int c,nb = 0,pos = 1;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            nb = TABINC - (pos - 1) % TABINC;
            while (nb > 0) {
                putchar(' ');
                ++pos;
                --nb;
            }
        } else if (c == '\n') {
            putchar(c);
            pos = 1;
        }else {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}
