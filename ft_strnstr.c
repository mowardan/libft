#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && big[i])
	{
		j = i;
		k = 0;
		while (j < len && big[j] && little[k] && big[j] == little[k])
		{
			j++;
			k++;
		}
		if (!little[k])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
