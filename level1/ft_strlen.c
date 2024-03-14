#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while(*str)
	{
		len++;
		str++;
	}
	return (len);
}

int main (void)
{
	char	*str = "salma";
	int		len;

	len = ft_strlen(str);
	printf("%d", len);
}