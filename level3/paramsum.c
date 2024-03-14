#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putnbr(i % 10);
	}
	else if (i >= 0 && i <= 9)
	{
		i = i + '0';
		write(1, &i, 1);
	}
}

int main (int ac, char **av)
{
	(void)av;
	ft_putnbr(ac - 1);
	write(1, "\n", 1);
}