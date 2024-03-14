#include <stdio.h>
#include <unistd.h>

int	 main (int ac, char **av)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (ac == 3)
	{
		while (av[1][j] != '\0')
		{
			i = j;
			while (av[2][i] != '\0')
			{
				if (av[1][j] == av[2][i])
				{
					k = j - 1;
					while (av[1][j] != av[1][k] && k >= 0)
						k--;
					if (k == -1)
						write(1, &av[1][j], 1);
					i++;
					break ;
				}
				i++;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}
