#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*mem;
	size_t	i;

	len = ft_strlen(s);
	mem = (char *)malloc(len + 1);
	if (!mem)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mem[i] = s[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}