#include <unistd.h>

int	main (int ac, char **av)
{
	if (ac == 2 || (av[1][0] == '0' || av[1][0] == '1'))
	{
		
	}
	write(1, "0", 1);
	write(1, "\n", 1);
}