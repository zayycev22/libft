#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	if (!find)
		return ((char *)s);
	i = 0;
	while (s[i] && i < len)
	{
		j = 0;
		while (s[i + j] && find[j] && i + j < len && s[i + j] == find[j])
			j++;
		if (!find[j])
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}