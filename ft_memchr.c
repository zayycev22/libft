#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (i < n)
	{
		if (*(char *)(s + i) == c)
			return ((char *)(s + i));
	}
	return (NULL);
}
