#include <conio.h>
#include <stdio.h>
#define IN 1
#define OUT 0
#define EOF '\n'

int main ()
{
	int c , state;
	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' ||c == '\t') {
			if (state = IN) {
				putchar('\n');
				state = OUT;
			}
		}else if (state == OUT) {
			state = IN;
			putchar(c);
		}else
			putchar(c);
	}
	getch;
	return 0;
}
