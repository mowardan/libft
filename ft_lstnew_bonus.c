#include "libft.h"

t_list	*ft_lstnew(int value)
{
	t_list	*rslt;

	rslt = (t_list *)malloc(sizeof(t_list));
	if (rslt == NULL)
		return (NULL);
	rslt->value = value;
	rslt->next = NULL;
	return (rslt);
}
