#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int size;

	size = 0;
	while (*src)
	{
		size++;
		src++;
	}
	return (size);
}

char    *ft_strdup(char *src)
{
	char	*dup;
	char	*start;

	dup = (char *) malloc (ft_strlen(src) + 1);
	start = dup;
	if (!dup)
		return (NULL);
	while (*src)
	{
		*dup = *src;
		dup++;
		src++; 
	}
	*dup = '\0';
	return (start);
}

int main (void)
{
	char	*src = "yasmine";
	char	*dup;
	char	*dup2;

	dup = ft_strdup(src);
	dup2 = strdup(src);
	printf("%s\n", dup);
	printf("%s\n", dup2);
	return (0);
}