/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:31:43 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/04 16:18:05 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int     ft_isalpha(int arg);
int     ft_isdigit(int arg);
int     ft_isalnum(int c);
int     ft_isascii(int arg);
int     ft_isprint(int arg);
size_t  ft_strlen(const char *c);
int     ft_toupper(int arg);
int     ft_tolower(int arg);
int     ft_atoi(const char *c);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
void    *ft_memchr(const void *s, int c, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t n);
size_t  ft_strlcpy(char *dst, const char *src, size_t n);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
void	*ft_calloc(size_t count, size_t size);
char    *ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putstr_fd(char *s, int fd);
char *ft_strtrim(char const *s1, char const *set);
void ft_putnbr_fd(int n, int fd);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_itoa(int n);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
