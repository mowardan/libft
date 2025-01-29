/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ouboukou@student.42.fr <ouboukou>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 22:17:45 by ouboukou          #+#    #+#             */
/*   Updated: 2024/07/08 14:19:00 by ouboukou@st      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value)
{
	t_list	*rslt;

	rslt = (t_list *)malloc(sizeof(t_list));
	if (rslt == NULL)
		return (NULL);
	rslt->value = value;
	rslt->next = NULL;
	return (rslt);
}
