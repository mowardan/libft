#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		len;
	char	*mem;
	int		i;

	if(!s || !f)
		return ;
	len = ft_strlen(s);
	mem = malloc(len + 1);
	if (!mem)
		return (NULL);
	i = 0;
	while (s[i])
	{
		mem[i] = f(i, s[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
