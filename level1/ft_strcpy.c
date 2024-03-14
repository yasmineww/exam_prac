#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dst, char *src)
{
	char	*dstt;

	dstt = dst;
	while(*src)
	{
		*dst = *src;
		dst++;
		src++;
	}
	*dst = '\0'; 
	return (dstt);
}

int main (void)
{
	char	*src = "salma";
	char	dst[] = "yasmi";
    char 	*res;

    res = ft_strcpy(dst, src);
    printf("dst == %s\n", res);
    return 0;
}