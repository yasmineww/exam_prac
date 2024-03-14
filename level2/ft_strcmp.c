#include <stdio.h>
#include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int main (void)
{
	char *str1 = "yas";
	char *str2 = "yasm";
	int	diff;
	int	diff2;

	diff = ft_strcmp(str1, str2);
	diff2 = strcmp(str1, str2);
	printf("diff : %d diff2 : %d\n", diff, diff2);
	return (0);
}