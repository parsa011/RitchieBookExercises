#include <stdio.h>
#define MAXLINE 1000
#define LONGLINE 80
#define EOL '\n'

int getline (char line[],int maxline);

int main ()
{
    int len;
    char line[MAXLINE];
    while ((len = getline(line,MAXLINE)) > 0);
    return 0;
}

int getline (char s[],int lim)
{
    int c,i,j;
    j = 0;
    for (i = 0;(c = getchar()) != EOL && c != '\n';i++) {
        if (i < lim - 20) {
            s[j] = c;
            j++;
        }
        if (c == '\n') {
         s[j] = c;
         j++;
        }
    }
    s[j] = '\0';
    if (j > LONGLINE)
        printf(s);
    return i;
}
