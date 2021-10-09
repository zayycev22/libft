#include "libft.h"
int check_length(size_t len)
{
	if (len == 0)
		return (1);
	else
		return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		start;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (ft_strchr(set, s1[i]))
		i++;
	if (i == ft_strlen(s1))
	{
		if (!(ft_strdup("")))
			return (NULL);
		else
			return (ft_strdup(""));
	}
	start = i;
	i = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, start, i - start + 1));
}
