#include <unistd.h>
#include <stdio.h>

int		not_seen_before(char *s, int max_pos, char c)
{
	int	i;

	i = -1;
	while(++i < max_pos)
		if (s[i] == c)
			return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 3)
	{
		i = -1;
		while (av[1][++i])
			if (not_seen_before(av[1], i, av[1][i]))
				write(1, &av[1][i], 1);
		j = -1;
		while (av[2][++j])
			if (not_seen_before(av[1], i, av[2][j]) & not_seen_before(av[2], j, av[2][j]))
				write(1, &av[2][j], 1);
	}
	write(1, "\n", 1);
	return (0);
}