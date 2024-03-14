#include <stdio.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str)
	{
		size++;
		str++;
	}
	return (size);
}

char    *ft_strrev(char *str)
{
	int	size;
	int	i;
	char	*cp;
	char	temp;
	cp = str;
	size = ft_strlen(str);
	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		temp = str[i];
		str[i] = str[size - 1];
		str[size - 1] = temp;
		size--;
		i++;
	}
	return (cp);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		ft_strrev(av[1]);
	}
	printf("string : %s\n", av[1]);
	return (0);
}