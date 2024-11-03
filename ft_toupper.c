/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:30:44 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/22 18:00:55 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int arg)
{
	 if(arg >= 97 && arg <= 122)
                return(arg - 32);
        return(arg);
}
// int main()
// {
//         char str = 'a';

//         printf("%c", ft_toupper(str));
//         return 0;
// }
