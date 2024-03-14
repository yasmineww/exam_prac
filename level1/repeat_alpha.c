#include <unistd.h>

int	main (int ac, char **av)
{
	int	i;
	int	j;

	j = 0;
	if (ac == 2)
	{
		while (av[1][j])
		{
			i = 1;
			if (av[1][j] >= 'a' && av[1][j] <= 'z')
				i += av[1][j] - 97;
			else if (av[1][j] >= 'A' && av[1][j] <= 'Z')
				i += av[1][j] - 65;
			while (i > 0)
			{
				write(1, &av[1][j], 1);
				i--;
			}
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}