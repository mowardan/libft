/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mowardan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:46:44 by mowardan          #+#    #+#             */
/*   Updated: 2024/10/25 12:28:28 by mowardan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
	const unsigned char *s = src;
	char unsigned *d = dst;

	if (d > s)
	{
		while(n--)
			d[n] = s[n];
	}
	else
	{
		ft_memcpy(dst, src, n);	
	}
	return(dst);
}
// int main()
// {
//     const char src[] = "abc";
// 	char dst[4];

//     ft_memmove(dst, src, sizeof(src));
// 	printf("%s\n", dst);
//     return 0;
// }
/*#include <stdio.h>
#include <string.h>

int main() 
{
    char src1[] = "Hello, World!";
    char dest1[20];
    char src2[] = "Overlap Test";
    char dest2[20];

    // Case 1: Normal case
    memmove(dest1, src1, 13);
    printf("Case 1: %s\n", dest1); // Expected: Hello, World!

    // Case 2: Overlapping regions (src before dest)
    strcpy(dest2, "Overlap Test");
    memmove(dest2 + 4, dest2, 10);
    printf("Case 2: %s\n", dest2); // Expected: OveOverlap Test

    // Case 3: Overlapping regions (dest before src)
    strcpy(dest2, "Overlap Test");
    memmove(dest2, dest2 + 4, 10);
    printf("Case 3: %s\n", dest2); // Expected: lap Test

    // Case 4: Zero length
    char dest3[20] = "No Change";
    memmove(dest3, dest3, 0);
    printf("Case 4: %s\n", dest3); // Expected: No Change

    // Case 5: Move with length zero
    char dest4[20] = "Test";
    memmove(dest4, dest4, 0);
    printf("Case 5: %s\n", dest4); // Expected: Test

    // Case 6: Source and destination are the same
    char dest5[] = "Same Source";
    memmove(dest5, dest5, 12);
    printf("Case 6: %s\n", dest5); // Expected: Same Source

    // Case 7: Moving part of a larger string
    char src3[] = "This is a test.";
    memmove(src3 + 5, src3, 10);
    printf("Case 7: %s\n", src3); // Expected: This This is a test.

    // Case 8: Edge case with NULL pointers (should handle gracefully)
    // (In practice, you should not call memmove with NULL pointers)

    return 0;
}*/
