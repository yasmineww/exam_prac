#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	Max;

	i = 0;
	if (len == 0)
		return 0;
	Max = tab[i];
	while (i < len)
	{
		if (Max < tab[i])
			Max = tab[i];
		i++;
	}
	return (Max);
}

int main (void)
{
	int	tab[5] = {5, 130, 9, 0, -1};
	unsigned int len = 5;
	int	Max;

	Max = max (tab, len);
	printf("maximum is = %d\n", Max);
	return 0;
}