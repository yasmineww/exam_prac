#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int	len;
	int	*tab;
	int	i;

	i = 0;
	len = abs(end - start) + 1;
	tab = malloc (sizeof(int) * len);
	if (start < end)
	{
		while (i < len)
		{
			tab[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (i < len)
		{
			tab[i] = start;
			i++;
			start--;
		}
	}
	return (tab);
}

int main (void)
{
	int *res;
	int	i;
	int end = 2;
	int start = -1;
	int len = abs(end - start) + 1;

	i = 0;
	res = ft_range(start, end);
	while (i < len)
	{
		printf("%d\n",res[i]);
		i++;
	}
	return (0);
}