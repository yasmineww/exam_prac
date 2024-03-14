#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int len;
	int i;
	int	*tab;

	i = 0;
	len = abs(end - start) + 1;
	tab = malloc (sizeof(int) * len);
	if (!tab)
		return 0;
	if (start < end)
	{
		while (i < len)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	if (start > end)
	{
		while (i < len)
		{
			tab[i] = end;
			end++;
			i++;
		}
	}
	return (tab);
}

int main (void)
{
	int *res;
	int	i;
	int end = 3;
	int start = 1;
	int len = abs(end - start) + 1;

	i = 0;
	res = ft_rrange(start, end);
	while (i < len)
	{
		printf("%d\n",res[i]);
		i++;
	}
	return (0);
}