#include <unistd.h>
#include <stdio.h>

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		int	i;
		int	size;
		int	j;

		i = 0;
		size = 0;

		//strlen

		while (av[1][i] != '\0')
		{
			size++;
			i++;
		}
		while (size > 0)
        {
			if (av[1][size - 1] == ' ' || av[1][size - 1] == '\t')
            	size--;
			else
			{
				j = size;
				break ;
			}
        }
		while (size > 0)
		{
			if (av[1][size - 1] != ' ' && av[1][size - 1] != '\t')
				size--;
			else if (av[1][size - 1] == ' ' || av[1][size - 1] == '\t')
				break ;
		}
		while (size < j)
		{
			write(1, &av[1][size], 1);
			size++;
		}
	}
	write(1,"\n", 1);
	return (0);
}