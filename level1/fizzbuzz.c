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

int main (void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else if (i % 5 == 0 && i % 3 == 0)
			write(1, "fizzbuzz\n", 9);
		else
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}