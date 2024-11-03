/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:04:26 by macbook           #+#    #+#             */
/*   Updated: 2024/11/03 22:03:53 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        size_t                  i;
        char                    *mem;
        unsigned int    str_len;

        str_len = ft_strlen(s);
        if (start >= str_len)
                len = 0;
        if (len > str_len - start)
                len = str_len - start;
        mem = (char *)malloc(len + 1);
        if (mem != NULL)
        {
                i = 0;
                while (s[i] && i < len)
                {
                        mem[i] = s[start + i];
                        i++;
                }
                mem[i] = 0;
        }
        return (mem);
}
