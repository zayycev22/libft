#include "libft.h"
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	size_t	length;

	if (!s && !f)
	{
		i = 0;
		length = ft_strlen(s);
		while (i < length)
		{
			f(i, s);
			i++;
			s++;
		}
	}
}
