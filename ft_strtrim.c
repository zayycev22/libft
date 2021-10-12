#include "libft.h"
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
