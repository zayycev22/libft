#include "libft.h"
int	count_n(int n)
{
	int	cnt;

	cnt = 0;
	if (n < 1)
	{
		cnt++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

void	reverse(char *a)
{
	size_t	i;
	char	c;

	i = 0;
	while (i < ft_strlen(a) / 2)
	{
		c = a[i];
		a[i] = a[ft_strlen(a) - 1 - i];
		a[ft_strlen(a) - 1 - i] = c;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		check;

	s = (char *)malloc(sizeof(char) * count_n(n));
	i = 0;
	check = 0;
	if (n < 0)
	{
		s[count_n(n) - 1] = '-';
		n *= -1;
		check = 1;
	}
	while (n > 0)
	{
		s[i] = (char)((n % 10) + '0');
		n /= 10;
		i++;
	}
	reverse(s);
	if (check)
		i++;
	s[i] = '\0';
	return (s);
}
