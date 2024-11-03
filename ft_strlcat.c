/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:23:35 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/28 17:23:39 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	i = 0;
	if (dst_size >= size)
		return (size + src_size);
	while (dst_size + i + 1 < size && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = 0;
	return (dst_size + src_size);
}
/*int main() {
    char dest1[20] = "Hello, ";
    const char *src1 = "World!";
    size_t result1 = ft_strlcat(dest1, src1, sizeof(dest1));
    printf("Test 1: %s (Result: %zu)\n", dest1, result1); // Should print "Hello, World!"

    char dest2[10] = "Hello, ";
    const char *src2 = "World!";
    size_t result2 = ft_strlcat(dest2, src2, sizeof(dest2));
    printf("Test 2: %s (Result: %zu)\n", dest2, result2); // Should print "Hello, " (truncated)

    char dest3[20] = "";
    const char *src3 = "World!";
    size_t result3 = ft_strlcat(dest3, src3, sizeof(dest3));
    printf("Test 3: %s (Result: %zu)\n", dest3, result3); // Should print "World!"

    char dest4[20] = "Hello, ";
    const char *src4 = "";
    size_t result4 = ft_strlcat(dest4, src4, sizeof(dest4));
    printf("Test 4: %s (Result: %zu)\n", dest4, result4); // Should print "Hello, "

    char dest5[10] = "12345";
    const char *src5 = "67890";
    size_t result5 = ft_strlcat(dest5, src5, sizeof(dest5));
    printf("Test 5: %s (Result: %zu)\n", dest5, result5); // Should print "12345" (no change, truncation)

    char dest6[15] = "abc";
    const char *src6 = "defghijklmnop";
    size_t result6 = ft_strlcat(dest6, src6, sizeof(dest6));
    printf("Test 6: %s (Result: %zu)\n", dest6, result6); // Should print "abcdefg" (truncated)

    return 0;
}*/