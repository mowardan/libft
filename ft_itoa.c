/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:46:59 by macbook           #+#    #+#             */
/*   Updated: 2024/11/06 12:27:21 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_needed_size(int n)
{
	int		count;
	long	nbr;

	nbr = n;
	count = 0;
	if(n == 0)
		return(1);
	if (n < 0)
	{
		nbr = -nbr;
		count++;
	}
	while (nbr > 0)
	{
		count++;
		nbr = nbr / 10;

	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*mem;
	long	nbr;

	size = get_needed_size(n);
	nbr = n;
	if (n < 0)
		nbr = -nbr;
	mem = malloc(sizeof(char) * size + 1);
	if (!mem)
		return (NULL);
	if(nbr == 0)
	{
		mem[0] = '0';
	}
	mem[size] = '\0';
	while (nbr > 0)
	{
		mem[--size] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	if (n < 0)
		mem[0] = '-';
	return (mem);
}
