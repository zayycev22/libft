#include "libft.h"
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*ans;

	if ((!s) || (!s && !f))
		return (NULL);
	ans = ft_strdup(s);
	i = 0;
	while (ans[i])
	{
		ans[i] = f(i, s[i]);
	}
	return (ans);
}
