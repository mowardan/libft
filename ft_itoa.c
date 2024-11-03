/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:46:59 by macbook           #+#    #+#             */
/*   Updated: 2024/11/03 00:53:02 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len(int nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*return_zero(char *str)
{
	if (!str)
		return (NULL);
	str[0] = 48;
	str[1] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		nb;

	if (n == 0)
    {
        str = (char *)malloc(2 * sizeof(char));
		return (return_zero(str));
    }
	nb = n;
	len = get_len(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len)
	{
		len--;
		str[len] = (nb % 10) + 48;
		nb = nb / 10;
	}
	if (n < 0)
		str[len] = 45;
	return (str);
}