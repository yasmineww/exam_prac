#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


int	int_len(int res)
{
	int	size;

	size = 0;
	if (res <= 0)
		size++;
	while (res != 0)
	{
		res = res / 10;
		size++;
	}
	return (size);
}

int	operation(char *av, int a, int b)
{
	int res;

	res = 0;
	if (av[0] == '+')
		res = a + b;
	else if (av[0] == '-')
		res = a - b;
	else if (av[0] == '*')
		res = a * b;
	else if (av[0] == '/')
		res = a / b;
	return (res);
}

int	main (int ac, char **av)
{
	if (ac == 4)
	{
		int	a;
		int	b;
		int	res;
		int	len;
	
		a = atoi(av[1]);
		b = atoi(av[3]);
		res = operation(av[2], a, b);
		len = int_len(res);
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
