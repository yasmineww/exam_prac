#include <unistd.h>
#include <stdio.h>

int	main (int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			i++;
		}
		while ((i - 1) >= 0)
		{
			write(1, &av[1][i - 1], 1);
			i--;
		}
	}
	write(1, "\n", 1);
	return (0);
}