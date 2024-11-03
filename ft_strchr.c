/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:18:24 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/23 14:37:24 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *str, int c)
{
	int i;

	i = 0;
	if (!str)
		return 0;
	while(str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	return(0);
}
