#include <stdio.h>
#define NONBLANK 'a'
#define EOF '\n'

int main ()
{
	int c, lastc;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')
				putchar(c);
		lastc = c;
	}
	return 0;
}
