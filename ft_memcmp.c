/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:25:06 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/24 16:00:03 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i = 0;
	const unsigned char *p1 = s1;
	const unsigned char *p2 = s2;

	while(i < n)
	{
		if(p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return 0;
}

/*int main() {
    // Test case 1
    const char str1[] = "Hello";
    const char str2[] = "Hello";
    printf("Test 1: %d\n", ft_memcmp(str1, str2, 5)); // Expected: 0

    // Test case 2
    const char str3[] = "World";
    printf("Test 2: %d\n", ft_memcmp(str1, str3, 5)); // Expected: Non-zero

    // Test case 3
    const char str4[] = "Hellz";
    printf("Test 3: %d\n", ft_memcmp(str1, str4, 5)); // Expected: Non-zero

    // Test case 4
    const char str5[] = "Hello, World!";
    printf("Test 4: %d\n", ft_memcmp(str1, str5, 5)); // Expected: 0

    // Test case 5
    const char str6[] = "";
    const char str7[] = "";
    printf("Test 5: %d\n", ft_memcmp(str6, str7, 0)); // Expected: 0

    // Test case 6
    const char *str8 = NULL;
    printf("Test 6: Undefined behavior\n"); // Will likely crash

    // Test case 7
    char str9[] = "HelloWorld";
    printf("Test 7: %d\n", ft_memcmp(str9 + 5, str9, 5)); // Expected: Non-zero

    // Test case 8
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 4};
    printf("Test 8: %d\n", ft_memcmp(arr1, arr2, sizeof(arr1))); // Expected: Non-zero

    // Test case 9
    const char str10[] = "12345";
    const char str11[] = {49, 50, 51, 52, 53}; // ASCII for '1', '2', '3', '4', '5'
    printf("Test 9: %d\n", ft_memcmp(str10, str11, 5)); // Expected: 0

    // Test case 10
    char arr3[1000];
    char arr4[1000];
    memset(arr3, 'A', sizeof(arr3));
    memset(arr4, 'A', sizeof(arr4));
    arr4[999] = 'B';
    printf("Test 10: %d\n", ft_memcmp(arr3, arr4, sizeof(arr3))); // Expected: Non-zero

    return 0;
}*/
