/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:29:43 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/25 12:22:32 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	const unsigned char *s = src;
	unsigned char *d = dest;

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
