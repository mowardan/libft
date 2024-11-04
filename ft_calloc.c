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
