#include <stdio.h>
#define EOF '\n'

int main ()
{
	int c,nb,nt,n1;
	nb = 0; /*blanks*/
	nt = 0; /*tabs*/
	n1 = 0; /*new lines*/
	while((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		if (c == '\t')
			++nt;
		if (c == '\n')
			++n1;
	}
	printf("%d %d %d\n",nb,nt,n1);
	return 0;
}
