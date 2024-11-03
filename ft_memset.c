/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:05:14 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/24 14:21:09 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i = 0;
	unsigned char *p = s;
	unsigned char k = c;

	while(n)
	{
		p[i] = k;
		n--;
		i++;
	}
	return (s);
}
/*int main()
{
	int tmp[] = {1, 2, 3, 4};
	int a = 1;
	int i = 0;
	ft_memset(tmp, a, 12);
	while(i < 12)
	{
		printf("%d\n", tmp[i]);
		i++;
	}
}*/
