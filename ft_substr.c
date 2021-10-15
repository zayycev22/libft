#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	sub = (char *)malloc(len * sizeof(char) + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}
