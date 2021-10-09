#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*f;

	f = NULL;
	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			f = s + i;
		i++;
	}
	return ((char *)f);
}
