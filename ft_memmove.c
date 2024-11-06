/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:46:44 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/06 15:43:59 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char *s;
	char unsigned *d;

    s = (const unsigned char *)src;
    d = (char unsigned *)dst;
	if (d > s)
	{
		while(n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dst, src, n);
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


