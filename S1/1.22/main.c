#include <stdio.h>

#define MAXCOL 10
#define TABINC 8
#define EOF '\n'

char line[MAXCOL];
int exptab(int pos);
int findblank(int pos);
int newpos(int pos);
void print1(int pos);

int main ()
{
    int c,pos = 0;
    while ((c = getchar()) != EOF) {
        line[pos] = c;
        if (c == '\t')
            pos = exptab(pos);
        else if (c == '\n') {
            print1(pos);
            pos = 0;
        }else if (++pos >= MAXCOL) {
            pos = findblank(pos);
            print1(pos);
            pos = newpos(pos);
        }
    }
    return 0;
}

void print1(int pos)
{
    int i;
    for (i = 0;i < pos;i++)
    {
        putchar(line[1]);
    }
    if (pos > 0)
        putchar('\n');
}

int exptab (int pos)
{
    line[pos] = ' ';
    for (++pos;pos < MAXCOL && pos % TABINC != 0;++pos) {
        line[pos] = ' ';
    }
    if (pos < MAXCOL)
        return 0;
    print1(pos);
    return 0;
}

int findblank (int pos)
{
    while (pos > 0 && line[pos] != ' ')
        --pos;
    if (pos == 0)
        return MAXCOL;
    else
        return pos + 1;
}

int newpos (int pos)
{
    int i,j;
    if (pos <= 0 || pos >= MAXCOL)
        return 0;
    i = 0;
    for (j = pos;j < MAXCOL;++j) {
        line[i++] = line[j];
    }
    return i;
}
