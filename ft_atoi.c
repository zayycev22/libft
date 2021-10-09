#include "libft.h"
int	get_i_num(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			return (i);
		}
		if (str[i] != '-' && str[i] != '+' && str[i] != '\t' && str[i] != '\r' \
			&& str[i] != ' ')
			return (-1);
		i++;
	}
	return (-1);
}

int	to_num(const char *str)
{
	int	i;
	int	num;
	int	flag;

	i = get_i_num(str);
	flag = 0;
	num = 0;
	if (i == -1)
		return (0);
	while (str[i])
	{
		if (ft_isdigit(str[i]))
		{
			flag = 1;
			num += str[i] - '0';
			num *= 10;
		}
		else if (!ft_isdigit(str[i + 1]) && flag)
			break ;
		i++;
	}
	return (num / 10);
}

int	cnt_(const char *str)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (ft_isalnum(str[i]))
			break ;
		else if (str[i] == '-' || str[i] == '+')
			cnt++;
		i++;
	}
	return (cnt);
}

int	sign(const char *str)
{
	int	i;
	int	s;

	s = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] == '-')
			return (-1);
		i++;
	}
	return (s);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	f;

	if (cnt_(str) > 1)
		return (0);
	else
	{
		num = to_num(str);
		f = cnt_(str);
		if (f)
			return (num * sign(str));
		else
			return (num);
	}
}
