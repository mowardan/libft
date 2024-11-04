/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:10:20 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/04 18:39:01 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i;

	i = 0;

	while(c[i])
	{
		i++;
	}
	return(i);
}

/*int main()
{
	const char *c = "noura zin dlealam";

	printf("%ld", ft_strlen(c));
}*/
