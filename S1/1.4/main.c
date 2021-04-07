#include <stdio.h>
/*print fahrenheir-celsius table for fahr=0,20,...,300; floating-point version*/
int main ()
{
	float fahr,celsius;
	int lower,upper,step;
	lower = 0;
	upper = 300;
	step = 20;
	printf("fahr celsius\n");
	celsius = lower;
	while (celsius <= upper)
	{
		fahr = (9.0 * celsius) / 5.0 * 32.0;
		printf("%3.0f  %6.1f\n",celsius,fahr);
		celsius = celsius + step;
	}
	return 0;
}
