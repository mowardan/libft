/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:16:22 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/11 14:46:25 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr;
    unsigned char z;

    ptr = (const unsigned char *)s;
    z = (unsigned char)c;
    while(n--)
    {
        if(*ptr == z)
        {
            return (void *)ptr;
        }
        ptr++;
    }
    return NULL;
}
