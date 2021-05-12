#include <stdio.h>
#define MAXLINE 1000
#define EOL '\n'

int getline2 (char s[],int lim);
int remove2 (char s[]);

int main ()
{
    char line[MAXLINE];
    while (getline2(line,MAXLINE) > 0)
        if (remove2(line) > 0)
            printf("%s\n",line);
    return 0;
}

int remove2 (char s[])
{
    int i = 0;
    while (s[i] != '\n')
        i++;
    i--;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i >= 0) {
        s[++i] = '\n';
        s[++i] = '\0';
    }
    return i;
}

int getline2 (char s[],int lim) 
{
    int c,i,j;
    j = 0;
    for (i = 0; (c = getchar()) != EOL && c != '\n';i++)
        if (i < lim - 20) {
            s[j] = c;
            j++;
        }
    if (c == '\n') {
        s[j] = c;
        j++;
    }
    s[j] = '\0';
    return i;
}