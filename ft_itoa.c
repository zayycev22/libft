#include "libft.h"
#include <stdio.h>
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

int	checks(int *n, char *s, int *i)
{
	int		check;
	int		check2;

	check = 0;
	check2 = 0;
	if (*n < 0)
	{
		if (*n == -2147483648)
		{
			*n = *n + 1;
			check2 = 1;
		}
		s[count_n(*n) - 1] = '-';
		*n = *n * -1;
		check = 1;
	}
	if (*n == 0)
	{
		s[0] = '0';
		*i = 1;
	}
	return (check + check2);
}

char	from_int(int n)
{
	char	c;

	c = (char )((n % 10) + '0');
	return (c);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	int		check;
	int		tmp;

	tmp = n;
	s = (char *) malloc(sizeof(char) * count_n(n));
	if (!s)
		return (NULL);
	i = 0;
	check = checks(&tmp, s, &i);
	while (tmp > 0)
	{
		s[i] = from_int(tmp % 10);
		tmp /= 10;
		i++;
	}
	if (check > 0)
	{
		if (check > 1)
			s[0] = '8';
		i++;
	}
	s[i] = '\0';
	reverse(s);
	s[i] = '\0';
	return (s);
}
