#include <unistd.h>

int main (int ac, char **av)
{
	int	i = 0;
	int	start;
	int	end;

	if (ac >= 2)
	{
		while (av[1][i] && av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		start = i;
		while (av[1][i] && av[1][i] != ' ' || av[1][i] != '\t')
			i++;
		end = i;
		while (av[1][i] && av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i])
		{
			while ((av[1][i] == ' ' && av[1][i] == '\t') || (av[1][i + 1] == ' ' && av[1][i + 1] == '\t'))
				i++;
			if (av[1][])
		}
	}
	write(1, "\n", 1);
}
