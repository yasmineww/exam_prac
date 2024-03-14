#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main (void)
{
	int	a = 5;
	int	b = 3;

	ft_swap(&a, &b);
	printf("a == %d and b == %d", a, b);
	return (0);
}