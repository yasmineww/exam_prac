#include <stdio.h>

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    int nb = 0;

    if (str[0] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            nb = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            nb = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            nb = str[i] - 'A' + 10;
        else
            break;
        if (nb >= str_base)
            break;
        result = result * str_base + nb;
        i++;
    }
    return (result * sign);
}



int main (void)
{
	printf("%d\n", ft_atoi_base("101", 2));
	return (0);
}
