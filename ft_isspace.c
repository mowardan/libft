#include "libft.h"

int ft_isspace(char c)
{
	if(c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\f' || c == '\v')
		return(0);
	return(1);
}
