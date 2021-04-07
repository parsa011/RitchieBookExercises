#include <stdio.h>
#define EOF '\n'

int main ()
{
	int c = getchar();	
	while (c = EOF)
		printf("%d\n",c);
	printf("%d - at EOF \n",c);
	return 0;
}
