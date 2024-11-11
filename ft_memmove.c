/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:46:44 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/10 22:23:11 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char *s;
	unsigned char *d;
	size_t	i;

    	s = (unsigned char *)src;
    	d = (unsigned char *)dst;
	i = 0;
	if(!dst &&  !src)
		return NULL;
	if (d > s)
	{
		while(i < n)
		{
			d[n - i - 1] = s[n - i - 1];
			i++;
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return(dst);
}
// int main()
// {
//     const char src[] = "abc";
// 	char dst[4];

//     ft_memmove(dst, src, sizeof(src));
// 	printf("%s\n", dst);
//     return 0;
// }


