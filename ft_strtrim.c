/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:23:27 by macbook           #+#    #+#             */
/*   Updated: 2024/11/03 00:40:10 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set) 
{
    size_t start;
    size_t end;
    char *mem;
    size_t len;
    size_t i;

    if (!s1 || !set)
    {
        return NULL;
    }
    start = 0;
    end = ft_strlen(s1);
    while (s1[start] && ft_strchr(set, s1[start]))
    {
        start++;
    }
    while (end > start && ft_strchr(set, s1[end - 1]))
    {
        end--;
    }
    len = end - start; 
    mem = malloc(len + 1);
    if (!mem)
    {
        return NULL;
    }
    i = 0;
    while (i < len)
    {
        mem[i] = s1[start + i];
        i++;
    }
    mem[i] = '\0';
    return mem;
}