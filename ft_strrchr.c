/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:32:28 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/24 13:44:59 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
        int i;

        i = ft_strlen(str);

        if (!str)
                return 0;
        while(i)
        {
                if (str[i] == (char)c)
                        return ((char *)str + i);
                i--;
        }
        return((char *)str);
}
