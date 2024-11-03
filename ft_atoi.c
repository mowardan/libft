#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int r;
    int sign;

    i = 0;
    sign = 1;
    r = 0;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    if(str[i] == '-' || str[i] == '+')
    {
	if(str[i] == '-')
		sign *= -1;
	i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - 48);
        i++;
    }
    return (r * sign);
}
