#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	mem = malloc(size * count);
	if (mem != 0)
	{
		ft_bzero(mem, size * count);
		return (mem);
	}
	return NULL;
}

/*int	main(void)
{
	void	*ptrc;
	void	*ptrm;
	int		i;

	ptrc = calloc(3, 4);
	ptrm = malloc(12);
	i = 0;
	while (i < 12)
	{
		printf("%c__", ((char *)ptrm)[i] + 48);
		printf("%c\n", ((char *)ptrc)[i] + 48);
		i++;
	}
}*/
