#include "libft.h"
void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (i < ft_strlen(s))
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
