#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(int))
{
	if (lst == NULL || del == NULL)
		return ;
	del(lst->value);
	free(lst);
}
