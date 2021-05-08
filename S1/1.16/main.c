#include <stdio.h>

#define MAXLINE 1000
#define EOL '\n'

int getline (char s[],int maxline);
void copy (char to[],char from[]);

int main ()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line,MAXLINE)) != 0) {
        printf("%d,%s\n",len,line);
        if (len > max) {
            max = len;
            copy(longest,line);
        }
    }
    if (max > 0) {
        printf("longest line equals : %s\n",longest);
    }
    return 0;
}

int getline (char s[],int maxline) 
{
    int c,i,j;
    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != EOL;++i) {
        if (i < maxline - 20) {
            s[j] = c;
            ++j;
        }
        if (c == '\n') {
            s[j] = c;
            ++j;
        }
    }
    s[j] = '\0';
    return i;
}

void copy (char to[],char from[])
{
    for (int i = 0; (to[i] = from[i]) != '\0';i++);
}
