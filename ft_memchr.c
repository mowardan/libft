/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:16:22 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/26 10:17:15 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char *ptr = s;
    unsigned char z = c;

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

/*int main() {
    // 1. Test case where 'c' is found in the block of memory 's'
    char str1[] = "Hello World";
    char *result1_std = memchr(str1, 'W', strlen(str1));
    char *result1_ft = ft_memchr(str1, 'W', strlen(str1));
    printf("1. 'W' found (Standard): %s\n", result1_std ? result1_std : "(NULL)");
    printf("1. 'W' found (ft_memchr): %s\n", result1_ft ? result1_ft : "(NULL)");

    // 2. Test case where 'c' is not found in the block of memory 's'
    char *result2_std = memchr(str1, 'Z', strlen(str1));
    char *result2_ft = ft_memchr(str1, 'Z', strlen(str1));
    printf("2. 'Z' found (Standard): %p\n", (void *)result2_std);
    printf("2. 'Z' found (ft_memchr): %p\n", (void *)result2_ft);

    // 3. Test case where 'n' is 0
    char *result3_std = memchr(str1, 'H', 0);
    char *result3_ft = ft_memchr(str1, 'H', 0);
    printf("3. n=0 (Standard): %p\n", (void *)result3_std);
    printf("3. n=0 (ft_memchr): %p\n", (void *)result3_ft);

    // 4. Test case where 'c' is '\0'
    char str4[] = "Example";
    char *result4_std = memchr(str4, '\0', strlen(str4) + 1);
    char *result4_ft = ft_memchr(str4, '\0', strlen(str4) + 1);
    printf("4. '\\0' found (Standard): %p\n", (void *)result4_std);
    printf("4. '\\0' found (ft_memchr): %p\n", (void *)result4_ft);

    // 5. Test case with 'n' larger than the actual size of 's'
    char str5[] = "Short";
    char *result5_std = memchr(str5, 'r', 100);
    char *result5_ft = ft_memchr(str5, 'r', 100);
    printf("5. 'r' with large n (Standard): %s\n", result5_std ? result5_std : "(NULL)");
    printf("5. 'r' with large n (ft_memchr): %s\n", result5_ft ? result5_ft : "(NULL)");

    return 0;
}*/
