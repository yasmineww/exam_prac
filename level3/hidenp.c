#include <unistd.h>

int main (int ac, char **av)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][i] && av[2][j])
		{
			if (av[1][i] == av[2][j])
				i++;
			else
				j++;
		}
		if (av[1][i] == '\0')
		{
			write(1, "1", 1);
		}
		else
			write(1, "0", 1);

	}
	write(1, "\n", 1);
	return (0);
}
