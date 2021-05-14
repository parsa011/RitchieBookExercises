#include <stdio.h>

#define MAXLINE 1000
#define EOF '\n'

int getline2(char line[],int lim);
void reverse(char s[]);

int main ()
{
    char line[MAXLINE];
    while (getline2(line,MAXLINE) > 0) {
        reverse(line);
        printf("%s",line);
    }
    return 0;
}

void reverse (char s[])
{
    int i = 0,j = 0;
    char temp;
    while (s[i++] != '\0');
    i--;
    if (s[i] == '\n')
        i--;
    while (j < i) {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        i--;
        j++; 
    } 
}

int getline2 (char line[], int lim)
{
    int c,i,j = 0;
    for (i = 0;(c = getchar()) != EOF && c != EOF;i++){
        if (i < MAXLINE - 20) {
            line[j++] = c;
        }
    }
    if (c == '\n')
        line[j++] = '\n';
    line[j] = '\0';
    return i;
}
