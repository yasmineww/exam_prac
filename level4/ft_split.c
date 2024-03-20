#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
	int	i = 0;
	int	k = 0;
	int	j = 0;
	int	wc = 0;
	int	start;
	char	**ptr;

	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		wc++;
		while ((str[i] != ' ' || str[i] != '\t' || str[i] != '\n') && str[i])
			i++;
	}
	ptr = malloc (wc + 1);
	i = 0;
	while (str[i])
	{
		j = 0;
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
		start = i;
		while ((str[i] != ' ' || str[i] != '\t' || str[i] != '\n') && str[i])
			i++;
		ptr[k] =  malloc (i - start + 1);
		while (start < i)
		{
			ptr[k][j] = str[start];
			start++;
			j++;
		}
		ptr[k][j] = '\0';
		k++;
	}
	ptr[k] = NULL;
	return (ptr);
}

int main (void)
{
	char **ptr = ft_split("klklnkklnml");
	int	i = 0;

	while (ptr[i])
	{
		printf("%s",ptr[i]);
		i++;
	}
}