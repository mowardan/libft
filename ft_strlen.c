/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:10:20 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/22 15:29:40 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	i = 0;

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
