/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:05:14 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/04 18:38:26 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *p;
	unsigned char k;

	p = (unsigned char *)s;
	k = (unsigned char)c;
	i = 0;
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
