/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:04:26 by macbook           #+#    #+#             */
/*   Updated: 2024/11/03 00:13:19 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i = 0;
	char *mem;

	mem = (char *)malloc(len + 1);
	if (!mem)
	{
		while (s[i] && i < len)
		{
			mem[i] = s[start + i];
			i++;
		}
		mem[i] = 0;
	}
	return (mem);
}