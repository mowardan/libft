/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macbook <macbook@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:45:22 by mowardan          #+#    #+#             */
/*   Updated: 2024/11/04 00:52:18 by macbook          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (i + 1 < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// int main() {
//     char dest[20] = "amine";
//     const char *src = "Hello, World!";

//     // Case 1: Standard copy
//     ft_strlcpy(dest, src, sizeof(dest));
//     printf("Case 1: Standard copy\n");
//     printf("Destination: '%s'\n", dest);

//     // Case 2: Destination buffer too small
//     char small_dest[5];
//     size_t len2 = ft_strlcpy(small_dest, src, sizeof(small_dest));
//     printf("Case 2: Destination buffer too small\n");
//     printf("Destination: '%s' (Length returned: %zu)\n", small_dest, len2);

//     // Case 3: Zero size for destination
//     size_t len3 = ft_strlcpy(dest, src, 0);
//     printf("Case 3: Zero size for destination\n");
//     printf("Length returned: %zu (Destination unchanged: '%s')\n", len3, dest);

//     // Case 4: Empty source string
//     const char *empty_src = "";
//     ft_strlcpy(dest, empty_src, sizeof(dest));
//     printf("Case 4: Empty source string\n");
//     printf("Destination: '%s'\n", dest);

//     // Case 5: Exact fit
//     char exact_fit[14]; // 13 chars + null terminator
//     ft_strlcpy(exact_fit, src, sizeof(exact_fit));
//     printf("Case 5: Exact fit\n");
//     printf("Destination: '%s'\n", exact_fit);

//     // Case 6: Large destination buffer
//     char large_dest[50];
//     ft_strlcpy(large_dest, src, sizeof(large_dest));
//     printf("Case 6: Large destination buffer\n");
//     printf("Destination: '%s'\n", large_dest);

//     // Case 7: Source longer than destination
//     char too_small[10];
//     size_t len7 = ft_strlcpy(too_small, src, sizeof(too_small));
//     printf("Case 7: Source longer than destination\n");
//     printf("Destination: '%s' (Length returned: %zu)\n", too_small, len7);

//     return 0;
// }
