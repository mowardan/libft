#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	if (s == NULL)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static char	**one_more_line(char const*s, char c, char **str, size_t count)
{
	size_t	start;
	size_t	end;
	size_t	i;

	start = 0;
	i = 0;
	while (i < count)
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		str[i] = ft_substr(s, start, end - start);
		if (str[i] == NULL)
		{
			ft_free(str);
			return (0);
		}
		start = end;
		i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**new_str;
	size_t	count;

	if(s == NULL)
		return (NULL);
	count = count_words(s, c);
	new_str = malloc((count + 1) * sizeof(char *));
	if (new_str == NULL )
		return (NULL);
	one_more_line(s, c, new_str, count);
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}

// int main() {
//     char **result = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');

//     if (result) {
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("Word: %s\n", result[i]);
//             free(result[i]);
//         }
//         free(result);
//     }
//     return 0;
// }
