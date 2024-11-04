/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:29:43 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/04 18:37:47 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	const unsigned char *s;
	unsigned char *d;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while(n--)
	{
		d[i] = s[i];
		i++;
	}
	return(dest);
}
// int main() {
//     char src[] = "Hello, world!";
//     char dest[13];
//     char dest2[13];

//     ft_memcpy(dest, src, 13);
//     dest[13] = '\0';

//     memcpy(dest2, src, 13);
//     dest2[13] = '\0';

//     printf("%s\n", dest);
//     printf("%s\n", dest2);
//     return 0;
// }
