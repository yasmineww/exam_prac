#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int nbr)
{
	int		nb = nbr;
	char	*ptr;
	int		len = 0;

	if (nb == -2147483648)
		return ("-2147483648");
	if (nb < 0)
		len++;
	while (nb)
	{
		nb = nb / 10;
		len++;
	}
	ptr = malloc (len + 1);
	printf("len  %d\n", len);
	if (nbr == 0)
	{
		// len++;
		ptr[0] = '0';

	}
	else if (nbr < 0)
	{
		ptr[0] = '-';
		nbr = nbr * -1;
	}
	ptr[len--] = '\0';
	while (nbr != 0)
	{
		ptr[len] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (ptr);
}

int  main (void)
{
	char *ptr = ft_itoa(0);
	printf("%s", ptr);
	printf("add %p\n", &ptr[0]);
	printf("add %p\n", &ptr[2]);
}