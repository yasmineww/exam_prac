#include <unistd.h>

int	main (int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				av[1][i] = 'Z' - av[1][i] + 'A'  ;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				av[1][i] = 'z' - av[1][i] + 'a';
			write (1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

// z - position + a --> calculating how far our character is from z, then adding the same difference to a to get a character thats far from a with the same position 