#include "libft.h"
int	count_dels(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			count++;
		i++;
	}
	if (count == 0)
		count++;
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	size_t	start;
	size_t	end;
	size_t	cnt;

	ans = (char **)malloc(sizeof(char *) * count_dels(s, c) + 1);
	if (!ans)
		return (NULL);
	cnt = 0;
	start = 0;
	end = 0;
	while (start <= ft_strlen(s))
	{
		if (s[start] == c || start == ft_strlen(s))
		{
			ans[cnt] = ft_substr(s, end, start - end);
			end = start;
			end++;
			cnt++;
		}
		start++;
	}
	ans[cnt] = NULL;
	return (ans);
}
