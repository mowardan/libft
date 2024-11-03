/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:35:21 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/22 11:57:32 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)	
{
	if(ft_isdigit(c) || ft_isalpha(c))
		return(1);
	return(0);
}
// int main(int c, char **v)
// {

// 	printf("%d", ft_isalnum((int)v[1][0]));
// 	return(0);
// }
