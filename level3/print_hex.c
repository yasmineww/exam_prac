#include <unistd.h>

void	print_hex(int n)
{
	char	*tab = "0123456789abcdef";

	if (n >= 16)
	{
		print_hex(n / 16);
		print_hex(n % 16);
	}
	else if (n < 16)
		write(1, &tab[n], 1);
}

int	ft_atoi(char *str)
{
	int n = 0;

	while (*str != '\0')
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n);
}

int main (int ac, char **av)
{
	int	i;
	int n;

	i = 0;
	if (ac == 2)
	{
		n = ft_atoi(av[1]);
		print_hex(n);
	}
	write(1, "\n", 1);
}
