/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:46:59 by macbook           #+#    #+#             */
/*   Updated: 2024/11/04 00:19:48 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_needed_size(int n)
{
	int		count;
	long	nbr;

	nbr = n;
	if (n < 0)
		nbr = -nbr;
	count = 1;
	while ((int)(nbr / 10) > 0)
	{
		nbr = nbr / 10;
		count++;
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
	{
		nbr = -nbr;
		size++;
	}
	mem = malloc(size + 1);
	if (!mem)
		return (NULL);
	mem[size] = '\0';
	while ((int)(nbr / 10) > 0)
	{
		mem[--size] = '0' + nbr % 10;
		nbr = nbr / 10;
	}
	mem[--size] = '0' + nbr % 10;
	if (n < 0)
		mem[--size] = '-';
	return (mem);
}

// int main()
// {
// 	printf("%s",ft_itoa(-247483648));
// }
