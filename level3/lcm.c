#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)//infinite loop
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

int main (void)
{
	unsigned int a;
	unsigned int b;
	unsigned int c;

	c = lcm(a, b);
	printf("%d\n", c);
	return (0);
}