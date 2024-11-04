/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 00:19:52 by macbook           #+#    #+#             */
/*   Updated: 2024/11/04 17:59:33 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int len;

    len = ft_strlen(s);
    write(fd, s, len);
}
// int main()
// {
//     char s[] = "salam taha";
//     int fd = open("taha.txt", O_RDWR | O_CREAT | O_TRUNC, 777);
//     if(fd == -1)
//     {
//         perror("file no create");
//     }
//     ft_putstr_fd(s, fd);
// }
