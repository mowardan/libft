/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:47:04 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/24 13:59:14 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char *p = s;

	i = 0;
	
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}